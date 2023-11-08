class Solution:
    def isReachableAtTime(self, sx: int, sy: int, fx: int, fy: int, t: int) -> bool:
        alongX = abs(fx - sx)
        alongY = abs(fy - sy)
        minCount = 0

        if alongX <= alongY:
            minCount += alongX + (alongY - alongX)
        else:
            minCount += alongY + (alongX - alongY)

        if sx == fx and sy == fy:
            return t != 1

        return t >= minCount