export function isIncreasingNumberByDistanceV1(n, distance) {
  if (n < 10 || n >= 1000000 || distance <= 0 || distance >= 5) return false;
  const Array = n.toString().split('');
  for (let i = 0; i < Array.length - 1; i++) {
    if (Array[i + 1] - Array[i] !== distance) return false;
  }
  return true;
}

export function isIncreasingNumberByDistanceV2(n, distance) {
  if (n < 10 || n >= 1000000 || distance <= 0 || distance >= 5) return false;
  while (n > 10) {
    let lastDigitAtRight = n % 10;
    n = Math.trunc(n / 10);
    if (lastDigitAtRight - (n % 10) !== distance) return false;
  }
  return true;
}
