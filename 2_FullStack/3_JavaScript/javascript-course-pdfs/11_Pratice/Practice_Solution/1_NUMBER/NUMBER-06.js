export function isPerfectNumberV1(n) {
  if (n <= 0 || n >= 1000) return false;
  let sumOfDivisor = 0;
  for (let i = 1; i <= Math.sqrt(n); i++) {
    if (n % i === 0) {
      sumOfDivisor += i;
      if (n / i !== i && i !== 1) {
        sumOfDivisor += n / i;
      }
    }
  }
  return sumOfDivisor === n;
}
