// NUMBER-01: Kiểm tra số tăng dần
// Viết hàm isIncreasingNumber(n) để kiểm tra n có phải là số tăng dần hay không?
// 0 < n < 1000000
// Số tăng dần có ít nhất 2 chữ số
// Chữ số bên phải luôn lớn hơn chữ số bên trái
// Trả về true nếu là số tăng dần, ngược lại trả về false

import { isIncreasingNumberV1, isIncreasingNumberV2 } from './NUMBER-01';

describe('isIncreasingNumberV1 abcdef expect to a < b < c < d < e < f', () => {
  test('should return false when n <= 0 or n >= 1000000', () => {
    expect(isIncreasingNumberV1(-1)).toBe(false);
    expect(isIncreasingNumberV1(1000000)).toBe(false);
  });
  test('should return false when n has less than 2 digits', () => {
    expect(isIncreasingNumberV1(1)).toBe(false);
    expect(isIncreasingNumberV1(2)).toBe(false);
    expect(isIncreasingNumberV1(3)).toBe(false);
    expect(isIncreasingNumberV1(4)).toBe(false);
    expect(isIncreasingNumberV1(5)).toBe(false);
    expect(isIncreasingNumberV1(6)).toBe(false);
    expect(isIncreasingNumberV1(7)).toBe(false);
    expect(isIncreasingNumberV1(8)).toBe(false);
    expect(isIncreasingNumberV1(9)).toBe(false);
  });
  test('the right digit always bigger than the left digit', () => {
    expect(isIncreasingNumberV1(12345)).toBe(true);
    expect(isIncreasingNumberV1(54198)).toBe(false);
    expect(isIncreasingNumberV1(5555)).toBe(false);
    expect(isIncreasingNumberV1(224455)).toBe(false);
  });
});

describe('isIncreasingNumberV2 abcdef expect to a < b < c < d < e < f', () => {
  test('should return false when n <= 0 or n >= 1000000', () => {
    expect(isIncreasingNumberV2(-1)).toBe(false);
    expect(isIncreasingNumberV2(1000000)).toBe(false);
  });
  test('should return false when n has less than 2 digits', () => {
    expect(isIncreasingNumberV2(1)).toBe(false);
    expect(isIncreasingNumberV2(2)).toBe(false);
    expect(isIncreasingNumberV2(3)).toBe(false);
    expect(isIncreasingNumberV2(4)).toBe(false);
    expect(isIncreasingNumberV2(5)).toBe(false);
    expect(isIncreasingNumberV2(6)).toBe(false);
    expect(isIncreasingNumberV2(7)).toBe(false);
    expect(isIncreasingNumberV2(8)).toBe(false);
    expect(isIncreasingNumberV2(9)).toBe(false);
  });
  test('the right digit always bigger than the left digit', () => {
    expect(isIncreasingNumberV2(12345)).toBe(true);
    expect(isIncreasingNumberV2(54198)).toBe(false);
    expect(isIncreasingNumberV2(5555)).toBe(false);
    expect(isIncreasingNumberV2(224455)).toBe(false);
  });
});
