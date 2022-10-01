// NUMBER-02: Kiểm tra số giảm dần
// Viết hàm isDecreasingNumber(n) để kiểm tra n có phải là số giảm dần hay không?
// 0 < n < 1000000
// Số giảm dần có ít nhất 2 chữ số
// Chữ số bên phải luôn nhỏ hơn chữ số bên trái
// Trả về true nếu là số giảm dần, ngược lại trả về false.

import { isDecreasingNumberV1, isDecreasingNumberV2 } from './NUMBER-02';

describe('isDecreasingNumberV1', () => {
  test('should return false when n <= 0 or n >= 1000000', () => {
    expect(isDecreasingNumberV1(-1)).toBe(false);
    expect(isDecreasingNumberV1(1000000)).toBe(false);
  });
  test('should return false when n has less than 2 digits', () => {
    expect(isDecreasingNumberV1(1)).toBe(false);
    expect(isDecreasingNumberV1(2)).toBe(false);
    expect(isDecreasingNumberV1(3)).toBe(false);
    expect(isDecreasingNumberV1(4)).toBe(false);
    expect(isDecreasingNumberV1(5)).toBe(false);
    expect(isDecreasingNumberV1(6)).toBe(false);
    expect(isDecreasingNumberV1(7)).toBe(false);
    expect(isDecreasingNumberV1(8)).toBe(false);
    expect(isDecreasingNumberV1(9)).toBe(false);
  });
  test('the right digit always less than the left digit', () => {
    expect(isDecreasingNumberV1(543210)).toBe(true);
    expect(isDecreasingNumberV1(54198)).toBe(false);
    expect(isDecreasingNumberV1(5555)).toBe(false);
    expect(isDecreasingNumberV1(224455)).toBe(false);
  });
});

describe('isDecreasingNumberV2', () => {
  test('should return false when n <= 0 or n >= 1000000', () => {
    expect(isDecreasingNumberV2(-1)).toBe(false);
    expect(isDecreasingNumberV2(1000000)).toBe(false);
  });
  test('should return false when n has less than 2 digits', () => {
    expect(isDecreasingNumberV2(1)).toBe(false);
    expect(isDecreasingNumberV2(2)).toBe(false);
    expect(isDecreasingNumberV2(3)).toBe(false);
    expect(isDecreasingNumberV2(4)).toBe(false);
    expect(isDecreasingNumberV2(5)).toBe(false);
    expect(isDecreasingNumberV2(6)).toBe(false);
    expect(isDecreasingNumberV2(7)).toBe(false);
    expect(isDecreasingNumberV2(8)).toBe(false);
    expect(isDecreasingNumberV2(9)).toBe(false);
  });
  test('the right digit always less than the left digit', () => {
    expect(isDecreasingNumberV2(54321)).toBe(true);
    expect(isDecreasingNumberV2(543210)).toBe(true);
    expect(isDecreasingNumberV2(54198)).toBe(false);
    expect(isDecreasingNumberV2(5555)).toBe(false);
    expect(isDecreasingNumberV2(224455)).toBe(false);
  });
});
