export function isSymmetricNumberV1(n) {
  if (n <= 1 || n >= 1000000) return false;
  if (n < 10) return true;
  const Array = n.toString().split('');
  const original = parseInt(Array.join(''));
  const reverse = parseInt(Array.reverse().join(''));
  return original === reverse;
}

export function isSymmetricNumberV2(n) {
  if (n <= 1 || n >= 1000000) return false;
  if (n < 10) return true;
  let reverse = 0;
  let mark = n;
  while (mark > 0) {
    reverse = reverse * 10 + (mark % 10);
    mark = Math.trunc(mark / 10);
  }
  return reverse === n;
}
