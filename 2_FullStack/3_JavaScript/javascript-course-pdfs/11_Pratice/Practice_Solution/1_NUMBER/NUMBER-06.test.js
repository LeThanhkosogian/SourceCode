// NUMBER-06: Kiểm tra số hoàn hảo
// Viết hàm isPerfectNumber(n) để kiểm tra n có phải là số hoàn hảo hay không?
// Với n thoả điều kiện 1 < n < 1000
// Số hoàn hảo là số mà tổng của tất cả ước số (không tính chính nó, tức từ 1 đến n - 1) bằng chính nó.
// Trả về true nếu đúng, ngược lại trả về false.

import { isPerfectNumberV1 } from './NUMBER-06';

describe('isPerfectNumberV1', () => {
  test('should return false when n <= 0 or n >= 1000', () => {
    expect(isPerfectNumberV1(-1)).toBe(false);
    expect(isPerfectNumberV1(1000)).toBe(false);
  });
  test('should return true if sqrt(n) is a uint or return false', () => {
    expect(isPerfectNumberV1(6)).toBe(true);
    expect(isPerfectNumberV1(9)).toBe(false);
    expect(isPerfectNumberV1(15)).toBe(false);
    expect(isPerfectNumberV1(28)).toBe(true);
    expect(isPerfectNumberV1(30)).toBe(false);
    expect(isPerfectNumberV1(31)).toBe(false);
    expect(isPerfectNumberV1(49)).toBe(false);
    expect(isPerfectNumberV1(54)).toBe(false);
    expect(isPerfectNumberV1(496)).toBe(true);
  });
});
