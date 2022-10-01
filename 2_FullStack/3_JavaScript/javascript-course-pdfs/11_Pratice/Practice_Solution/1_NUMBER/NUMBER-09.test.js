// NUMBER-09: Kiểm tra số có tổng của 2 chữ số bằng số cho trước
// Viết hàm hasTwoDigitsWithSum(n, sum) để kiểm tra n (9 < n < 1000000) có chứa 2 chữ số bất kỳ nào có
// tổng bằng sum (0 < sum < 19) cho trước không?

import { hasTwoDigitsWithSumV1 } from './NUMBER-09';

describe('hasTwoDigitsWithSumV1', () => {
  test('should return false when n <= 9 or n >= 1000000', () => {
    expect(hasTwoDigitsWithSumV1(9, 15)).toBe(false);
    expect(hasTwoDigitsWithSumV1(1000000, 15)).toBe(false);
  });
  test('should return false when sum <= 0 or sum >= 18', () => {
    expect(hasTwoDigitsWithSumV1(15, 0)).toBe(false);
    expect(hasTwoDigitsWithSumV1(15, 19)).toBe(false);
  });
  test('should return true if sumOfDigit divisible by 10', () => {
    expect(hasTwoDigitsWithSumV1(10, 1)).toBe(true);
    expect(hasTwoDigitsWithSumV1(1010, 2)).toBe(true);
    expect(hasTwoDigitsWithSumV1(9993, 18)).toBe(true);
    expect(hasTwoDigitsWithSumV1(11546, 5)).toBe(true);
    expect(hasTwoDigitsWithSumV1(97211, 12)).toBe(false);
  });
});
