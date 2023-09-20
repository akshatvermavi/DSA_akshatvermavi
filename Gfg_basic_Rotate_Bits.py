class Solution:
    def rotate(self, N, D):
        # code here
        # D = D % 16
        # left_rotated = (n<<d) | (n >> (16-d))
        # right_rotated = (n>>d) | (n << (16-d)) & ((1 << 16)-2)
        # return [left_rotated,right_rotated]
        
        D=D%16
        binary_str = format(N, '016b')
        leftrot = int((binary_str[D:] + binary_str[:D]),2)
        rightrot = int((binary_str[-D:]+binary_str[:-D]),2)
        return leftrot,rightrot
