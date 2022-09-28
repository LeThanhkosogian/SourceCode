export function isIncreasingNumber(n) {
  if (n < 10 || n >= 1000000) return false;
  const Array = n.toString().split('');
  for (let i = 0; i < Array.length - 1; i++) {
    if (Array[i] >= Array[i + 1]) return false;
  }
  return true;
}
