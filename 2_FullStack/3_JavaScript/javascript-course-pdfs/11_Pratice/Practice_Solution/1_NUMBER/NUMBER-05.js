export function isPerfectSquareV1(n) {
  if (n <= 0 || n >= 1000000) return false;
  return Math.trunc(Math.sqrt(n)) * Math.trunc(Math.sqrt(n)) === n;
}
