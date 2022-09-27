// CE3: https://www.udemy.com/course/javascript-cho-nguoi-moi-bat-dau-2021/learn/quiz/5292476#overview
function getTaxiCount(passengersCount) {
  if (passengersCount <= 0) return -1;

  return Math.ceil(passengersCount / 7);
}

console.log(getTaxiCount(123456));

// CE4: https://www.udemy.com/course/javascript-cho-nguoi-moi-bat-dau-2021/learn/quiz/5291320#overview
function getMaxDigit(n) {
  if (n < 0 || n >= 1000) return -1;
  let digitArrayOfn = n.toString().split('');
  return Math.max(...digitArrayOfn);
}

console.log(getMaxDigit(123));

// CE5: https://www.udemy.com/course/javascript-cho-nguoi-moi-bat-dau-2021/learn/quiz/5291976#overview
function compareNumbers(a, b) {
  if (a === b) return 0;
  return a - b > 0 ? 1 : -1;
}

console.log(compareNumbers(10, 15));
console.log(compareNumbers(15, 15));
console.log(compareNumbers(20, 15));

//CE6: https://www.udemy.com/course/javascript-cho-nguoi-moi-bat-dau-2021/learn/quiz/5292446#overview
function isSymmetricNumber(n) {
  if (n < 0 || n > 999) return 'out range';

  if (Math.trunc(n / 10) === 0) return true;
  else if (Math.trunc(n / 100) === 0) {
    return n % 10 === Math.trunc(n / 10);
  } else if (Math.trunc(n / 1000) === 0) {
    return n % 10 === Math.trunc(n / 100);
  }
}

console.log(isSymmetricNumber(141));
console.log(isSymmetricNumber(150));
console.log(isSymmetricNumber(1));
console.log(isSymmetricNumber(22));

// Bài 1: Viết hàm tính thể tích hình cầu, với tham số truyền vào là bán kính của hình cầu.
function volumeOfSphere(Radius) {
  const PI = Math.PI;
  return ((4 * PI * Radius ** 3) / 3).toFixed(5);
}

console.log(volumeOfSphere(50));
console.log(volumeOfSphere(0));
console.log(volumeOfSphere(1));

// Bài 2: Viết hàm truyền vào 2 số nguyên, tính tổng tất cả các số nguyên nằm giữa chúng. Ví dụ với
// tham số 3 và 8 ta có kết quả là 22 (bằng 4 + 5 + 6 + 7).
function sumBetweenA_B(a, b) {
  let numberDigitsBetweenA_B = b - 1 - (a + 1) + 1;
  return ((a + 1 + b - 1) * numberDigitsBetweenA_B) / 2;
}

console.log(sumBetweenA_B(3, 8));

// Bài 3: Cho 1 số, kiểm tra xem số đó có phải là số nguyên tố hay không, kết quả trả về true hoặc false.
function isPrime(n) {
  if (n < 2) return false;
  for (let i = 2; i <= Math.sqrt(n); i++) {
    if (n % i === 0) return false;
  }
  return true;
}

console.log(isPrime(0));
console.log(isPrime(2));
console.log(isPrime(10));
console.log(isPrime(17));
console.log(isPrime(29));
console.log(isPrime(9));

// Bài 4: Cho 1 số nguyên dương bất kỳ. Tính tổng tất cả các số nguyên tố mà nhỏ hơn hoặc bằng tham
// số truyền vào.
function sumOfPrimeNumbers(n) {
  let sum = 2;
  for (let i = 3; i <= n; i += 2) {
    if (isPrime(i)) sum += i;
  }
  return sum;
}

console.log(sumOfPrimeNumbers(17));
console.log(sumOfPrimeNumbers(25));
console.log(sumOfPrimeNumbers(7));

// Bài 5: Cho 1 số nguyên dương, viết hàm tính tổng tất cả các ước số của số đó.
function sumOfDivisor(n) {
  let sum = 0;
  for (let i = 1; i <= Math.sqrt(n); i++) {
    if (n % i === 0) {
      sum = sum + i;
      sum = sum + n / i;
    }
  }
  return sum;
}

console.log(sumOfDivisor(5));
console.log(sumOfDivisor(15));
console.log(sumOfDivisor(21));

// Bài 6: Cho 1 số nguyên, hãy viết hàm sắp xếp lại các chữ số trong số nguyên đó sao cho ra 1 số nhỏ nhất có thể (không tính số 0 đầu tiên). Ví dụ với tham số 53751 thì kết quả là 13557.
function sortDigits(n) {
  let nToArray = n.toString().split('0').join('').split('').sort().join('');
  return nToArray;
}

console.log(sortDigits(54605));
console.log(sortDigits(53751));
