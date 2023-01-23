class Solution:
    def maxPoints(self, points: List[List[int]]) -> int:
        # def maxPoints(points):
        if len(points) <= 2:
            return len(points)
        max_points = 0
        for i in range(len(points)):
            slopes = {}
            duplicate = 1
            for j in range(i + 1, len(points)):
                if points[i][0] == points[j][0] and points[i][1] == points[j][1]:
                    duplicate += 1
                    continue
                if points[i][0] == points[j][0]:
                    slope = float('inf')
                else:
                    slope = (points[j][1] - points[i][1]) / (points[j][0] - points[i][0])
                if slope in slopes:
                    slopes[slope] += 1
                else:
                    slopes[slope] = 1
            max_points = max(max_points, duplicate)
            for slope in slopes:
                max_points = max(max_points, slopes[slope] + duplicate)
        return max_points
