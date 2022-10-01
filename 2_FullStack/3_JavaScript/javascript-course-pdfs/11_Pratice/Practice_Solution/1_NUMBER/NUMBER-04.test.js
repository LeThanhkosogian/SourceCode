// NUMBER-04: Kiểm tra số nguyên tố
// Viết hàm isPrime(n) để kiểm tra n có phải là số nguyên tố không?
// Số nguyên tố là số chỉ chia hết cho 1 và chính nó.
// 0 < n < 100000
// Trả về true nếu là số nguyên tố, ngược lại trả về false.

import { isPrimeV1, isPrimeV2 } from './NUMBER-04';

describe('isPrimeV1', () => {
  test('should return false when n <= 0 or n >= 1000000', () => {
    expect(isPrimeV1(0)).toBe(false);
    expect(isPrimeV1(1000000)).toBe(false);
  });
  test('should return false when n < 2', () => {
    expect(isPrimeV1(1)).toBe(false);
  });
  test('n >= 2', () => {
    expect(isPrimeV1(29)).toBe(true);
    expect(isPrimeV1(14)).toBe(false);
    expect(isPrimeV1(21)).toBe(false);
    expect(isPrimeV1(7)).toBe(true);
  });
});

describe('isPrimeV2', () => {
  test('should return false when n <= 0 or n >= 1000000', () => {
    expect(isPrimeV2(0)).toBe(false);
    expect(isPrimeV2(1000000)).toBe(false);
  });
  test('should return when n <= 3', () => {
    expect(isPrimeV2(1)).toBe(false);
    expect(isPrimeV2(2)).toBe(true);
    expect(isPrimeV2(3)).toBe(true);
  });
  test('n > 3', () => {
    expect(isPrimeV2(7)).toBe(true);
    expect(isPrimeV2(14)).toBe(false);
    expect(isPrimeV2(21)).toBe(false);
    expect(isPrimeV2(29)).toBe(true);
    expect(isPrimeV2(30)).toBe(false);
    expect(isPrimeV2(97)).toBe(true);
    expect(isPrimeV2(1354)).toBe(false);
  });
});
