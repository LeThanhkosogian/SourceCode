export function isIncreasingNumberV1(n) {
  if (n < 10 || n >= 1000000) return false;
  const Array = n.toString().split('');
  for (let i = 0; i < Array.length - 1; i++) {
    if (Array[i] >= Array[i + 1]) return false;
  }
  return true;
}

export function isIncreasingNumberV2(n) {
  if (n < 10 || n >= 1000000) return false;
  while (n > 0) {
    let lastDigitAtRight = n % 10;
    n = Math.trunc(n / 10);
    if (lastDigitAtRight <= n % 10) return false;
  }
  return true;
}
