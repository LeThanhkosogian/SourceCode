export function isPrimeV1(n) {
  if (n <= 0 || n >= 1000000) return false;
  if (n < 2) return false;
  for (let i = 2; i <= Math.sqrt(n); i++) {
    if (n % i === 0) return false;
  }
  return true;
}

export function isPrimeV2(n) {
  if (n <= 0 || n >= 1000000) return false;
  if (n <= 3) return n > 1;
  else if (n % 2 === 0 || n % 3 === 0) return false;
  let i = 5;
  while (i * i <= n) {
    if (n % i === 0 || n % (i + 2) === 0) return false;
    i = i + 6;
  }
  return true;
}
