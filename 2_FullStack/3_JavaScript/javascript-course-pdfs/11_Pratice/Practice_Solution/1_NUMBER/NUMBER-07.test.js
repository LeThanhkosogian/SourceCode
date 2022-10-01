// NUMBER-07: Kiểm tra số đối xứng
// Viết hàm isSymetricNumber(n) để kiểm tra n có phải là số đối xứng hay không?
// Với n thoả điều kiện 1 < n < 1000000
// Số đối xứng là số đọc từ trái sang phải cũng giống như đọc từ phải sang trái.
// Trả về true nếu đúng, ngược lại trả về false

import { isSymmetricNumberV1, isSymmetricNumberV2 } from './NUMBER-07';

describe('isSymmetricNumberV1', () => {
  test('should return false when n <= 1 or n >= 1000', () => {
    expect(isSymmetricNumberV1(1)).toBe(false);
    expect(isSymmetricNumberV1(1000000)).toBe(false);
  });
  test('should return true if SymmetricNumber else return false', () => {
    expect(isSymmetricNumberV1(2)).toBe(true);
    expect(isSymmetricNumberV1(3)).toBe(true);
    expect(isSymmetricNumberV1(4)).toBe(true);
    expect(isSymmetricNumberV1(5)).toBe(true);
    expect(isSymmetricNumberV1(6)).toBe(true);
    expect(isSymmetricNumberV1(7)).toBe(true);
    expect(isSymmetricNumberV1(8)).toBe(true);
    expect(isSymmetricNumberV1(9)).toBe(true);
    expect(isSymmetricNumberV1(10)).toBe(false);
    expect(isSymmetricNumberV1(11)).toBe(true);
    expect(isSymmetricNumberV1(69)).toBe(false);
    expect(isSymmetricNumberV1(100)).toBe(false);
    expect(isSymmetricNumberV1(101)).toBe(true);
    expect(isSymmetricNumberV1(131)).toBe(true);
    expect(isSymmetricNumberV1(6969)).toBe(false);
    expect(isSymmetricNumberV1(45654)).toBe(true);
    expect(isSymmetricNumberV1(123210)).toBe(false);
  });
});

describe('isSymmetricNumberV2', () => {
  test('should return false when n <= 1 or n >= 1000', () => {
    expect(isSymmetricNumberV2(1)).toBe(false);
    expect(isSymmetricNumberV2(1000000)).toBe(false);
  });
  test('should return true if SymmetricNumber else return false', () => {
    expect(isSymmetricNumberV2(2)).toBe(true);
    expect(isSymmetricNumberV2(3)).toBe(true);
    expect(isSymmetricNumberV2(4)).toBe(true);
    expect(isSymmetricNumberV2(5)).toBe(true);
    expect(isSymmetricNumberV2(6)).toBe(true);
    expect(isSymmetricNumberV2(7)).toBe(true);
    expect(isSymmetricNumberV2(8)).toBe(true);
    expect(isSymmetricNumberV2(9)).toBe(true);
    expect(isSymmetricNumberV2(10)).toBe(false);
    expect(isSymmetricNumberV2(11)).toBe(true);
    expect(isSymmetricNumberV2(69)).toBe(false);
    expect(isSymmetricNumberV2(100)).toBe(false);
    expect(isSymmetricNumberV2(101)).toBe(true);
    expect(isSymmetricNumberV2(131)).toBe(true);
    expect(isSymmetricNumberV2(6969)).toBe(false);
    expect(isSymmetricNumberV2(45654)).toBe(true);
    expect(isSymmetricNumberV2(123210)).toBe(false);
  });
});
