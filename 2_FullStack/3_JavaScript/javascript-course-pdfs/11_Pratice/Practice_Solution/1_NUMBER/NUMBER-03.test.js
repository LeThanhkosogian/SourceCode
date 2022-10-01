// NUMBER-03: Kiểm tra số tăng dần đều theo khoảng cách cho trước
// Viết hàm isIncreasingNumberByDistance(n, x) để kiểm tra n có phải là số tăng dần đều với khoảng cách
// giữa 2 chữ số là x không?
// 0 < n < 1000000, 0 < x < 5
// Số tăng dần có ít nhất 2 chữ số
// Chữ số bên phải luôn lớn hơn chữ số bên trái
// Khoảng cách của 2 chữ số liền kề là x
// Trả về true nếu là số tăng dần đều theo khoảng cách x, ngược lại trả về false.

import { isIncreasingNumberByDistanceV1, isIncreasingNumberByDistanceV2 } from './NUMBER-03';

describe('isIncreasingNumberByDistanceV1', () => {
  test('should return false when n <= 0 or n >= 1000000', () => {
    expect(isIncreasingNumberByDistanceV1(-1, 2)).toBe(false);
    expect(isIncreasingNumberByDistanceV1(1000000, 3)).toBe(false);
  });
  test('should return false when distance <= 0 or distance >= 5', () => {
    expect(isIncreasingNumberByDistanceV1(50, 0)).toBe(false);
    expect(isIncreasingNumberByDistanceV1(200, 5)).toBe(false);
  });
  test('should return false when n has less than 2 digits', () => {
    expect(isIncreasingNumberByDistanceV1(1, 3)).toBe(false);
    expect(isIncreasingNumberByDistanceV1(2, 3)).toBe(false);
    expect(isIncreasingNumberByDistanceV1(3, 3)).toBe(false);
    expect(isIncreasingNumberByDistanceV1(4, 3)).toBe(false);
    expect(isIncreasingNumberByDistanceV1(5, 3)).toBe(false);
    expect(isIncreasingNumberByDistanceV1(6, 3)).toBe(false);
    expect(isIncreasingNumberByDistanceV1(7, 3)).toBe(false);
    expect(isIncreasingNumberByDistanceV1(8, 3)).toBe(false);
    expect(isIncreasingNumberByDistanceV1(9, 3)).toBe(false);
  });
  test('the difference of rightNumber and leftNumber equal to distance', () => {
    expect(isIncreasingNumberByDistanceV1(12345, 1)).toBe(true);
    expect(isIncreasingNumberByDistanceV1(12321, 1)).toBe(false);
    expect(isIncreasingNumberByDistanceV1(5555, 2)).toBe(false);
    expect(isIncreasingNumberByDistanceV1(224466, 2)).toBe(false);
  });
});

describe('isIncreasingNumberByDistanceV2', () => {
  test('should return false when n <= 0 or n >= 1000000', () => {
    expect(isIncreasingNumberByDistanceV2(-1, 2)).toBe(false);
    expect(isIncreasingNumberByDistanceV2(1000000, 3)).toBe(false);
  });
  test('should return false when distance <= 0 or distance >= 5', () => {
    expect(isIncreasingNumberByDistanceV2(50, 0)).toBe(false);
    expect(isIncreasingNumberByDistanceV2(200, 5)).toBe(false);
  });
  test('should return false when n has less than 2 digits', () => {
    expect(isIncreasingNumberByDistanceV2(1, 3)).toBe(false);
    expect(isIncreasingNumberByDistanceV2(2, 3)).toBe(false);
    expect(isIncreasingNumberByDistanceV2(3, 3)).toBe(false);
    expect(isIncreasingNumberByDistanceV2(4, 3)).toBe(false);
    expect(isIncreasingNumberByDistanceV2(5, 3)).toBe(false);
    expect(isIncreasingNumberByDistanceV2(6, 3)).toBe(false);
    expect(isIncreasingNumberByDistanceV2(7, 3)).toBe(false);
    expect(isIncreasingNumberByDistanceV2(8, 3)).toBe(false);
    expect(isIncreasingNumberByDistanceV2(9, 3)).toBe(false);
  });
  test('the difference of rightNumber and leftNumber equal to distance', () => {
    expect(isIncreasingNumberByDistanceV2(12345, 1)).toBe(true);
    expect(isIncreasingNumberByDistanceV2(12321, 1)).toBe(false);
    expect(isIncreasingNumberByDistanceV2(5555, 2)).toBe(false);
    expect(isIncreasingNumberByDistanceV2(224466, 2)).toBe(false);
  });
});
