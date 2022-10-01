export function isDivisibleBy10V1(n) {
  if (n <= 0 || n >= 1000000) return false;
  let sumOfDigits = 0;
  while (n > 0) {
    sumOfDigits += n % 10;
    n = Math.trunc(n / 10);
  }
  console.log(sumOfDigits);
  return sumOfDigits % 10 === 0;
}

export function isDivisibleBy10V2(n) {
  if (n <= 1 || n >= 1000000) return false;
  let sumOfDigits = 0;
  const Array = n.toString().split('');
  for (let i = 0; i < Array.length; i++) {
    sumOfDigits += parseInt(Array[i]);
  }
  return sumOfDigits % 10 === 0;
}
