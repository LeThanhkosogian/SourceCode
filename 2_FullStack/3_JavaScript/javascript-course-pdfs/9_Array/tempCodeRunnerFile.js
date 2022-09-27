function getDivisorListV3(n) {
  return Array.from({ length: Math.sqrt(n) })
    .forEach((x) => n % x === 0 || n % (n / x) === 0)
    .sort((a, b) => a - b);
}
console.log(getDivisorListV3(100));
