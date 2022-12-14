function swap(a, b) {
  let temp;
  temp = a;
  a = b;
  b = temp;
}

function randomNumber(n) {
  let random = Math.random() * n;
  return Math.floor(random);
}

function compareNumber(a, b) {
  return a - b;
}

//CE16: https://www.udemy.com/course/javascript-cho-nguoi-moi-bat-dau-2021/learn/quiz/5291496#overview
//using for i
function createArrayInRangeV1(a, b) {
  const Array = [];
  for (let i = a; i <= b; i++) {
    Array.push(i);
  }
  return Array;
}

//using Array.from()
function createArrayInRangeV2(a, b) {
  return Array.from({ length: b - a + 1 }, (v, i) => (v = a + i));
}

// CE17: https://www.udemy.com/course/javascript-cho-nguoi-moi-bat-dau-2021/learn/quiz/5291506#overview
//Using loop from 2 to n-1
function isPrimeV1(n) {
  if (n < 2) return false;
  else if (n === 2) return true;
  for (let i = 2; i <= n - 1; i++) {
    if (n % i === 0) return false;
  }
  return true;
}
//Using loop from 2 to sqrt(n)
function isPrimeV2(n) {
  if (n < 2) return false;
  else if (n === 2) return true;
  for (let i = 2; i <= Math.sqrt(n); i++) {
    if (n % i === 0) return false;
  }
  return true;
}

//CE18: https://www.udemy.com/course/javascript-cho-nguoi-moi-bat-dau-2021/learn/quiz/5291498#overview
//Using for i from 1 to n
function getDivisorListV1(n) {
  const resultArray = [];
  for (let i = 1; i <= n; i++) {
    if (n % i === 0) resultArray.push(i);
  }
  return resultArray;
}
console.log(getDivisorListV1(100));

//Using Array.from + filter() from 1 to n
function getDivisorListV2(n) {
  return Array.from({ length: n }, (v, i) => (v = i + 1)).filter((divisor) => n % divisor === 0);
}
console.log(getDivisorListV2(100));

//Using Array.from(), forEach() + sort() from 1 to sqrt(n)
function getDivisorListV3(n) {
  return Array.from({ length: Math.sqrt(n) })
    .forEach((x) => n % x === 0 || n % (n / x) === 0)
    .sort((a, b) => a - b);
}
console.log(getDivisorListV3(100));

//CE19: https://www.udemy.com/course/javascript-cho-nguoi-moi-bat-dau-2021/learn/quiz/5291508#overview
function isPerfectNumber(n) {
  let sum = 0;
  for (let i = 1; i < Math.sqrt(n); i++) {
    if (n % i === 0) {
      sum += i;
      sum += n / i;
    }
  }
  return sum - n !== 0 && n === sum - n;
}

// B??i 1. Vi???t h??m t??m ra s??? nh??? nh???t trong m???ng c??c s???. V?? d???:
// minNumbers([2, 1, 3]) => K???t qu??? tr??? v??? l?? 1
function minNumbers(Array) {
  const sortedArray = [...Array].sort((a, b) => a - b);
  return sortedArray[0];
}

console.log(minNumbers([2, 6, 3]));
console.log(minNumbers([2, 1, -1]));
console.log(minNumbers([0, 1, 3]));

// B??i 2. Vi???t h??m t??m ra s??? l???n th??? nh?? trong m???ng c??c s???. V?? d???:
// max2Numbers([2, 1, 3, 4]) => K???t qu??? tr??? v??? l?? 3
function max2Numbers(Array) {
  const sortedArray = [...Array].sort((a, b) => b - a);
  return sortedArray[1];
}

console.log(max2Numbers([2, 6, 3, 10]));
console.log(max2Numbers([2, 1, -1, -49949]));
console.log(max2Numbers([0, 1, 3, 87965]));

// B??i 3. Vi???t h??m truy???n v??o 1 m???ng t??n h???c vi??n, s???p x???p l???i m???ng n??y theo chi???u ng?????c c???a b???ng ch??? c??i. V?? d???:
// sortStudents(['Nam', 'Hoa', 'Tu???n']) => K???t qu??? tr??? v??? l?? ['Tu???n', 'Nam', 'Hoa']
function sortStudents(studentArray) {
  let sortedStudentArray = [...studentArray].sort().reverse();
  return sortedStudentArray;
}
console.log(sortStudents(['Nam', 'Hoa', 'Tu???n']));

// B??i 4. T??nh t???ng c??c s??? chia h???t cho 5 t??? 0 -> 100
function sum(n) {
  let ans = 0;
  for (let i = 5; i <= n; i++) {
    ans += 5;
  }
  return ans;
}

console.log(sum(100));

// B??i 5. Vi???t h??m cho ph??p truy???n v??o 1 m???ng c??c s???, k???t qu??? tr??? v??? l?? 1 m???ng m???i v???i c??c s??? l?? s??? d?? t????ng ???ng khi chia m???ng c?? cho 2
function divide2(originArray) {
  let resultArray = [];
  for (let i = 0; i < originArray.length; i++) {
    resultArray[i] = originArray[i] % 2;
  }
  return resultArray;
}

console.log(divide2([2, 7, -15]));

// B??i 6. Cho 1 m???ng c??c chu???i. Vi???t h??m l???c ra c??c ph???n t??? c?? ????? d??i l???n nh???t. V?? d??? v???i tham s???
// ['aba', 'aa', 'ad', 'c', 'vcd'] th?? k???t qu??? tr??? v??? ['aba', 'vcd'].
function getMaxLengthOfString(stringArray) {
  let maxLength = stringArray[0].length;
  for (let i = 1; i < stringArray.length; i++) {
    if (stringArray[i].length > maxLength) maxLength = stringArray[i].length;
  }
  return maxLength;
}

function getLongestString(stringArray) {
  let ansArray = [];
  let maxLength = getMaxLengthOfString(stringArray);
  for (let i = 0; i < stringArray.length; i++) {
    if (stringArray[i].length === maxLength) {
      ansArray.push(stringArray[i]);
    }
  }
  return ansArray;
}

console.log(getLongestString(['aba', 'aa', 'ad', 'c', 'vcd']));
console.log(getLongestString(['aba', 'aa', 'ad', 'c', 'abcdef']));

// B??i 7: Vi???t ch????ng tr??nh JavaScript ????? l???y m???t ph???n t??? ng???u nhi??n t??? m???t m???ng
// sample([3, 7, 9, 11]) => 3
// sample([3, 7, 9, 11]) => 9
function getRadomNumberFromArray(Array) {
  let randomIndex = randomNumber(Array.length);
  return Array[randomIndex];
}

console.log(getRadomNumberFromArray([3, 7, 9, 11]));
console.log(getRadomNumberFromArray([3, 7, 9, 11]));
console.log(getRadomNumberFromArray([3, 7, 9, 11]));

// B??i 8: Vi???t ch????ng tr??nh ?????i ch??? ng???u nhi??n v??? tr?? c???a c??c ph???n t??? trong m???ng
function swapIndexArray(Array) {
  const clonedArray = [...Array];
  const randomIndex1 = randomNumber(Array.length);
  const randomIndex2 = randomNumber(Array.length);
  // swap(clonedArray[randomIndex1], clonedArray[randomIndex2]);
  let temp;
  temp = clonedArray[randomIndex1];
  clonedArray[randomIndex1] = clonedArray[randomIndex2];
  clonedArray[randomIndex2] = temp;
  return clonedArray;
}

console.log(swapIndexArray([3, 7, 9, 11]));
console.log(swapIndexArray([3, 7, 9, 11]));
console.log(swapIndexArray([3, 7, 9, 11]));

// B??i 9: Vi???t ch????ng tr??nh JavaScript ????? l???y m???t m???ng c??c ph???n t??? xu???t hi???n trong c??? hai m???ng
// similarity([1, 2, 3], [1, 2, 4]) => [1,2]
function findSimilarity(Array1, Array2) {
  const ArrayAns = [];
  for (let j = 0; j < Array2.length; j++) {
    if (Array1.includes(Array2[j]) === true) ArrayAns.push(Array2[j]);
  }
  return ArrayAns;
}

console.log(findSimilarity([45, 13, 7894, 16], [13, 16, 948, 4613]));
console.log(findSimilarity([45, 13, 7894, 16], [31, 314, 948, 4613]));
console.log(findSimilarity([45, 13, -7, 16], [13, 16, -7, 4613]));

// B??i 10: Vi???t m???t ch????ng tr??nh JavaScript ????? l???y s??? ph???n t??? kh??ng xu???t hi???n ??? c??? 2 m???ng
// symmetricDifference([1, 2, 3], [1, 2, 4]) => [3,4]
function findDifference(Array1, Array2) {
  const ArrayAns = [];
  for (let i = 0; i < Array1.length; i++) {
    if (Array2.includes(Array1[i]) === false) ArrayAns.push(Array1[i]);
  }
  for (let i = 0; i < Array2.length; i++) {
    if (Array1.includes(Array2[i]) === false) ArrayAns.push(Array2[i]);
  }
  return ArrayAns;
}

console.log(findDifference([45, 13, 7894, 16], [13, 16, 948, 4613]));
console.log(findDifference([45, 13, 7894, 16], [31, 314, 948, 4613]));
console.log(findDifference([1, 2, 3], [1, 2, 4]));

// B??i 12: Vi???t m???t ch????ng tr??nh JavaScript tr??? v??? m???t t???p h???p con c???a m???t chu???i.
// sub_String("dog") => ["d","do","dog","o","og","g"]
function subString(String) {
  const resultArray = [];
  let countSub = 0;
  for (let i = 0; i <= String.length; i++) {
    for (let j = i + 1; j <= String.length; j++) {
      resultArray[countSub] = String.slice(i, j);
      countSub++;
    }
  }
  return resultArray;
}

console.log(subString('dog'));
console.log(subString('LeThanh'));
console.log(subString('Hello'));

// B??i 13: Ki???m tra m???ng xem c?? ph???i m???ng t??ng d???n hay kh??ng
function increaseArray(Array) {
  for (let i = 0; i < Array.length - 1; i++) {
    if (compareNumber(Array[i], Array[i + 1]) > 0) return false;
  }
  return true;
}

console.log(increaseArray([0, 4, 6]));
console.log(increaseArray([2, 4, 3]));
console.log(increaseArray([-2, 4, 6]));

// B??i 14: Ki???m tra m???ng xem c?? ph???i m???ng s?? l??? gi???m d???n hay kh??ng
function oddDecreaseArray(Array) {
  for (let i = 0; i < Array.length; i++) {
    if (Array[i] % 2 === 0 || Array[i + 1] % 2 === 0 || Array[i] - Array[i + 1] < 0) return false;
  }
  return true;
}

console.log(oddDecreaseArray([3, 1, -1]));
console.log(oddDecreaseArray([11, 511, 495]));
console.log(oddDecreaseArray([-7946, 4, 6]));
