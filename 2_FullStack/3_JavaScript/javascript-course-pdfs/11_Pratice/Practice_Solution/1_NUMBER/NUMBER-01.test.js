// 0 < n < 1000000
// Số tăng dần có ít nhất 2 chữ số
// Chữ số bên phải luôn lớn hơn chữ số bên trái

import { isIncreasingNumber } from './NUMBER-01';

describe('abcdef expect to a < b < c < d < e < f', () => {
  test('should return false when n <= 0 or n >= 1000000', () => {
    expect(isIncreasingNumber(-1)).toBe(false);
    expect(isIncreasingNumber(1000000)).toBe(false);
  });
  test('should return false when n has less than 2 digits', () => {
    expect(isIncreasingNumber(1)).toBe(false);
    expect(isIncreasingNumber(2)).toBe(false);
    expect(isIncreasingNumber(3)).toBe(false);
    expect(isIncreasingNumber(4)).toBe(false);
    expect(isIncreasingNumber(5)).toBe(false);
    expect(isIncreasingNumber(6)).toBe(false);
    expect(isIncreasingNumber(7)).toBe(false);
    expect(isIncreasingNumber(8)).toBe(false);
    expect(isIncreasingNumber(9)).toBe(false);
  });
  test('the right digit always bigger than the left digit', () => {
    expect(isIncreasingNumber(12345)).toBe(true);
    expect(isIncreasingNumber(54198)).toBe(false);
    expect(isIncreasingNumber(5555)).toBe(false);
  });
});
