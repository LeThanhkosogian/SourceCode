// NUMBER-08: Kiểm tra số có tổng chữ số chia hết cho 10
// Viết hàm isDivisibleBy10(n) để kiểm tra n (0 < n < 1000000) có tổng chữ số chia hết cho 10 hay không?

import { isDivisibleBy10V1, isDivisibleBy10V2 } from './NUMBER-08';

describe('isDivisibleBy10V1', () => {
  test('should return false when n <= 0 or n >= 1000000', () => {
    expect(isDivisibleBy10V1(0)).toBe(false);
    expect(isDivisibleBy10V1(1000000)).toBe(false);
  });
  test('should return true if sumOfDigit divisible by 10', () => {
    expect(isDivisibleBy10V1(10)).toBe(false);
    expect(isDivisibleBy10V1(19)).toBe(true);
    expect(isDivisibleBy10V1(1010)).toBe(false);
    expect(isDivisibleBy10V1(9993)).toBe(true);
    expect(isDivisibleBy10V1(97211)).toBe(true);
  });
});

describe('isDivisibleBy10V2', () => {
  test('should return false when n <= 0 or n >= 1000000', () => {
    expect(isDivisibleBy10V2(0)).toBe(false);
    expect(isDivisibleBy10V2(1000000)).toBe(false);
  });
  test('should return true if sumOfDigit divisible by 10', () => {
    expect(isDivisibleBy10V2(10)).toBe(false);
    expect(isDivisibleBy10V2(19)).toBe(true);
    expect(isDivisibleBy10V2(1010)).toBe(false);
    expect(isDivisibleBy10V2(9993)).toBe(true);
    expect(isDivisibleBy10V2(97211)).toBe(true);
  });
});
