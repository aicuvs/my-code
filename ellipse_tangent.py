import math


EPS = 1e-9


def format_line(A, B, C):
    """Format a line as Ax + By + C = 0."""
    return f"{A:.10g}x + {B:.10g}y + {C:.10g} = 0"


def is_on_ellipse(a, b, x, y):
    return abs(x * x / (a * a) + y * y / (b * b) - 1) < EPS


def tangent_at_point(a, b, x0, y0):
    if not is_on_ellipse(a, b, x0, y0):
        raise ValueError("该点不在椭圆上，不能用“椭圆上一点”的公式。")

    A = x0 / (a * a)
    B = y0 / (b * b)
    C = -1
    return [(A, B, C)]


def tangents_from_point(a, b, px, py):
    position = px * px / (a * a) + py * py / (b * b)
    if position < 1 - EPS:
        raise ValueError("该点在椭圆内部，不能作实切线。")

    if abs(position - 1) < EPS:
        return tangent_at_point(a, b, px, py)

    qa = px * px - a * a
    qb = -2 * px * py
    qc = py * py - b * b

    lines = []

    if abs(qa) < EPS:
        if abs(qb) < EPS:
            raise ValueError("无法稳定计算切线，请换一种输入方式。")

        slopes = [-qc / qb]
    else:
        delta = qb * qb - 4 * qa * qc
        if delta < -EPS:
            raise ValueError("该点不能作实切线。")

        delta = max(0, delta)
        sqrt_delta = math.sqrt(delta)
        slopes = [(-qb + sqrt_delta) / (2 * qa), (-qb - sqrt_delta) / (2 * qa)]

    for m in slopes:
        # y - py = m(x - px) -> mx - y + (py - mpx) = 0
        lines.append((m, -1, py - m * px))

    # When px = +/-a, one tangent is vertical: x = px.
    if abs(qa) < EPS:
        lines.append((1, 0, -px))

    return lines


def read_float(prompt):
    while True:
        try:
            return float(input(prompt))
        except ValueError:
            print("请输入数字。")


def main():
    print("椭圆切线计算器")
    print("默认椭圆方程：x^2/a^2 + y^2/b^2 = 1")

    a = read_float("请输入 a（长/短半轴，正数）：")
    b = read_float("请输入 b（长/短半轴，正数）：")

    if a <= 0 or b <= 0:
        print("a 和 b 必须是正数。")
        return

    print("\n请选择计算方式：")
    print("1. 已知椭圆上一点，求该点切线")
    print("2. 已知椭圆外一点，求过该点的切线")
    choice = input("输入 1 或 2：").strip()

    x = read_float("请输入点的 x 坐标：")
    y = read_float("请输入点的 y 坐标：")

    try:
        if choice == "1":
            lines = tangent_at_point(a, b, x, y)
        elif choice == "2":
            lines = tangents_from_point(a, b, x, y)
        else:
            print("无效选择。")
            return
    except ValueError as exc:
        print(exc)
        return

    print("\n切线方程：")
    for index, (A, B, C) in enumerate(lines, start=1):
        print(f"{index}. {format_line(A, B, C)}")


if __name__ == "__main__":
    main()
