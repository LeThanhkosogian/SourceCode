// NUMBER-05: Kiểm tra số chính phương
// Viết hàm isPerfectSquare(n) để kiểm tra n có phải là số chính phương không?
// 0 < n < 100000
// Số chính phương là số có căn bậc 2 của nó là một số tự nhiên.
// Trả về true nếu là số chính phương, ngược lại trả về false.

import { isPerfectSquareV1 } from './NUMBER-05';

describe('isPerfectSquareV1', () => {
  test('should return false when n <= 0 or n >= 1000000', () => {
    expect(isPerfectSquareV1(-1)).toBe(false);
    expect(isPerfectSquareV1(1000000)).toBe(false);
  });
  test('should return true if sqrt(n) is a uint or return false', () => {
    expect(isPerfectSquareV1(0)).toBe(false);
    expect(isPerfectSquareV1(1)).toBe(true);
    expect(isPerfectSquareV1(2)).toBe(false);
    expect(isPerfectSquareV1(3)).toBe(false);
    expect(isPerfectSquareV1(4)).toBe(true);
    expect(isPerfectSquareV1(6)).toBe(false);
    expect(isPerfectSquareV1(7)).toBe(false);
    expect(isPerfectSquareV1(8)).toBe(false);
    expect(isPerfectSquareV1(9)).toBe(true);
    expect(isPerfectSquareV1(100)).toBe(true);
  });
});
