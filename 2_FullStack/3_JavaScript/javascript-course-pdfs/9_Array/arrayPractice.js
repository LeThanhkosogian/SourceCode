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

// Bài 1. Viết hàm tìm ra số nhỏ nhất trong mảng các số. Ví dụ:
// minNumbers([2, 1, 3]) => Kết quả trả về là 1
function minNumbers(Array) {
  const sortedArray = [...Array].sort((a, b) => a - b);
  return sortedArray[0];
}

console.log(minNumbers([2, 6, 3]));
console.log(minNumbers([2, 1, -1]));
console.log(minNumbers([0, 1, 3]));

// Bài 2. Viết hàm tìm ra số lớn thứ nhì trong mảng các số. Ví dụ:
// max2Numbers([2, 1, 3, 4]) => Kết quả trả về là 3
function max2Numbers(Array) {
  const sortedArray = [...Array].sort((a, b) => b - a);
  return sortedArray[1];
}

console.log(max2Numbers([2, 6, 3, 10]));
console.log(max2Numbers([2, 1, -1, -49949]));
console.log(max2Numbers([0, 1, 3, 87965]));

// Bài 3. Viết hàm truyền vào 1 mảng tên học viên, sắp xếp lại mảng này theo chiều ngược của bảng chữ cái. Ví dụ:
// sortStudents(['Nam', 'Hoa', 'Tuấn']) => Kết quả trả về là ['Tuấn', 'Nam', 'Hoa']
function sortStudents(studentArray) {
  let sortedStudentArray = [...studentArray].sort().reverse();
  return sortedStudentArray;
}
console.log(sortStudents(['Nam', 'Hoa', 'Tuấn']));

// Bài 4. Tính tổng các số chia hết cho 5 từ 0 -> 100
function sum(n) {
  let ans = 0;
  for (let i = 5; i <= n; i++) {
    ans += 5;
  }
  return ans;
}

console.log(sum(100));

// Bài 5. Viết hàm cho phép truyền vào 1 mảng các số, kết quả trả về là 1 mảng mới với các số là số dư tương ứng khi chia mảng cũ cho 2
function divide2(originArray) {
  let resultArray = [];
  for (let i = 0; i < originArray.length; i++) {
    resultArray[i] = originArray[i] % 2;
  }
  return resultArray;
}

console.log(divide2([2, 7, -15]));

// Bài 6. Cho 1 mảng các chuỗi. Viết hàm lọc ra các phần tử có độ dài lớn nhất. Ví dụ với tham số
// ['aba', 'aa', 'ad', 'c', 'vcd'] thì kết quả trả về ['aba', 'vcd'].
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

// Bài 7: Viết chương trình JavaScript để lấy một phần tử ngẫu nhiên từ một mảng
// sample([3, 7, 9, 11]) => 3
// sample([3, 7, 9, 11]) => 9
function getRadomNumberFromArray(Array) {
  let randomIndex = randomNumber(Array.length);
  return Array[randomIndex];
}

console.log(getRadomNumberFromArray([3, 7, 9, 11]));
console.log(getRadomNumberFromArray([3, 7, 9, 11]));
console.log(getRadomNumberFromArray([3, 7, 9, 11]));

// Bài 8: Viết chương trình đổi chỗ ngẫu nhiên vị trí của các phần tử trong mảng
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

// Bài 9: Viết chương trình JavaScript để lấy một mảng các phần tử xuất hiện trong cả hai mảng
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

// Bài 10: Viết một chương trình JavaScript để lấy sự phần tử không xuất hiện ở cả 2 mảng
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

// Bài 12: Viết một chương trình JavaScript trả về một tập hợp con của một chuỗi.
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

// Bài 13: Kiểm tra mảng xem có phải mảng tăng dần hay không
function increaseArray(Array) {
  for (let i = 0; i < Array.length - 1; i++) {
    if (compareNumber(Array[i], Array[i + 1]) > 0) return false;
  }
  return true;
}

console.log(increaseArray([0, 4, 6]));
console.log(increaseArray([2, 4, 3]));
console.log(increaseArray([-2, 4, 6]));

// Bài 14: Kiểm tra mảng xem có phải mảng sô lẻ giảm dần hay không
function oddDecreaseArray(Array) {
  for (let i = 0; i < Array.length; i++) {
    if (Array[i] % 2 === 0 || Array[i + 1] % 2 === 0 || Array[i] - Array[i + 1] < 0) return false;
  }
  return true;
}

console.log(oddDecreaseArray([3, 1, -1]));
console.log(oddDecreaseArray([11, 511, 495]));
console.log(oddDecreaseArray([-7946, 4, 6]));
