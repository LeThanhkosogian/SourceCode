// CE7: //www.udemy.com/course/javascript-cho-nguoi-moi-bat-dau-2021/learn/quiz/5291358#overview
https: function removeVowel(originString) {
  if (originString === '') return '';
  let resultString = originString
    .replace('u', '')
    .replace('e', '')
    .replace('o', '')
    .replace('a', '')
    .replace('i', '');
  return resultString.trim();
}

console.log(removeVowel('iloveyou'));

// CE8: //www.udemy.com/course/javascript-cho-nguoi-moi-bat-dau-2021/learn/quiz/5291958#overview
//use if...else
https: function formatSecondsV1(seconds) {
  if (seconds < 10) return ('0' + seconds).toString();
  return seconds.toString();
}
//use slice()
function formatSecondsV2(seconds) {
  return ('0' + seconds).toString().slice(-2);
}

// CE9: https://www.udemy.com/course/javascript-cho-nguoi-moi-bat-dau-2021/learn/quiz/5291824#overview
const SECONDS_PER_MIN = 60;
const SECONDS_PER_HOUR = 3600;

function formatTime(seconds) {
  let hour = ('0' + Math.trunc(seconds / SECONDS_PER_HOUR).toString()).slice(-2);
  seconds = seconds - hour * SECONDS_PER_HOUR;
  let minute = ('0' + Math.trunc(seconds / SECONDS_PER_MIN).toString()).slice(-2);
  seconds = ('0' + (seconds - minute * SECONDS_PER_MIN).toString()).slice(-2);
  return hour + ':' + minute + ':' + seconds;
}
console.log(formatTime(0));

// CE10: https://www.udemy.com/course/javascript-cho-nguoi-moi-bat-dau-2021/learn/quiz/5291950#overview
//using indexOf()
function isSecureURL_V1(url) {
  return url.indexOf('https') === 0 || url.indexOf('wss') === 0;
}
//using startWith()
function isSecureURL_V2(url) {
  return url.startsWith('https') || url.startsWith('wss');
}

// CE11: https://www.udemy.com/course/javascript-cho-nguoi-moi-bat-dau-2021/learn/quiz/5291956#overview
//using split()
function extractDomainV1(email) {
  if (email === '') return '';
  return email.split('@')[1];
}

//using indexOf()
function extractDomainV2(email) {
  if (email === '') return '';
  return email.slice(email.indexOf('@') + 1);
}

//CE12: https://www.udemy.com/course/javascript-cho-nguoi-moi-bat-dau-2021/learn/quiz/5291972#overview
function findSecret(code) {
  let secret = '';
  for (let i = 0; i < code.length; i++) {
    if (code[i] !== code[i].toUpperCase()) secret += code[i];
  }
  return secret;
}

//CE13: https://www.udemy.com/course/javascript-cho-nguoi-moi-bat-dau-2021/learn/quiz/5292450#overview
function solve(str) {
  if (!str) return '';
  const handleString = str.trim();
  const resultString = `${handleString[0].toUpperCase()}${handleString.slice(1).toLowerCase()}`;
  return resultString;
}

function getFullName(firstName, lastName) {
  const fN = solve(firstName);
  const lN = solve(lastName);
  return `${fN} ${lN}`.trim();
}

// Bài 1. Viết 1 function kiểm tra 1 chuỗi có nằm trong chuỗi còn lại hay không. Nếu có trả về true, nếu không trả về false
// - Đầu vào có 2 tham số : Tham số 1 là chuỗi ban đầu, tham số 2 là chuỗi cần kiểm tra
function checkStringExists(bigString, tinyString) {
  return bigString.includes(tinyString);
}

console.log(checkStringExists('i love you', 'love'));
console.log(checkStringExists('i love you', 'hate'));

// Bài 2. Viết hàm rút ngắn chuỗi bằng cách cắt ra 8 ký tự cuối của 1 chuỗi và thêm dấu ba chấm ở cuối chuỗi.
// Ví dụ: shortenString('Xin chào các bạn') => Kết quả trả về là 'Xin chào...'
function shortenString(originString) {
  if (originString.length <= 16) return originString;
  return originString.substring(0, originString.length - 8) + '\u2026';
}

console.log(shortenString('Xin chào các bạn'));
console.log(shortenString('Tôi tên là Lê Thành, mã sinh viên B21DCAT176'));

// Bài 3. Viết hàm có tác dụng biến 1 chuỗi thành chỉ viết hoa từ đầu tiên.
// Ví dụ: capitalizeString('chÀo MừnG đẾn với xTP') => Kết quả trả về là 'Chào Mừng Đến Với XTP'
function capitalizeString(originString) {
  const lowerCaseString = originString.toLowerCase(); //Change All to lower case
  const subStr = lowerCaseString.split(' '); // Split all parts into substrings
  for (let i = 0; i < subStr.length; i++) {
    subStr[i] = subStr[i][0].toUpperCase() + subStr[i].slice(1);
  }
  return subStr.join(' ');
}

console.log(capitalizeString('chÀo MừnG đẾn với xTP'));

// Bài 4. Cho 1 chuỗi, hãy viết hàm có tác dụng sao chép đó chuỗi lên 10 lần.
function repeatString_4(originString, timeRepeats) {
  return originString.repeat(timeRepeats);
}

console.log(repeatString_4('Le', 10));

// Bài 5. Cho 1 chuỗi, hãy viết hàm có tác dụng sao chép đó chuỗi lên 10 lần, ngăn cách nhau bởi dấu gạch ngang.
// Ví dụ: repeatString('a') => Kết quả trả về là 'a-a-a-a-a-a-a-a-a-a'
// Bài 6. Cho 1 chuỗi và 1 số nguyên n > 1, hãy viết hàm có tác dụng sao chép đó chuỗi lên n lần, ngăn cách nhau bởi dấu gạch ngang.
// Ví dụ: repeatString('a', 5) => Kết quả trả về là 'a-a-a-a-a'
function repeatString_5(originString, timeRepeats, link) {
  let originStringWithLink = originString + link;
  let repeatedString = originStringWithLink.repeat(timeRepeats);
  return repeatedString.slice(0, -1);
}

console.log(repeatString_5('Le', 10, '-'));
console.log(repeatString_5('A', 10, '+'));
console.log(repeatString_5('Z', 10, '&'));

// Bài 7. Viết hàm đảo ngược chuỗi. Viết dunction với đầu vào là 1 chuỗi string. Trả về chuỗi đảo ngược của chuỗi đó
// Ví dụ: reverseStrin('Hello') => Kết quả trả về là 'olleH'
function reverseString(originString) {
  let reverse = '';
  for (let i = originString.length - 1; i >= 0; i--) {
    reverse = reverse + originString[i];
  }
  return reverse;
}

console.log(reverseString('Hello'));
console.log(reverseString('Waiting for You'));
console.log(reverseString('Bye'));

// Bài 8. Cho 1 chuỗi, kiểm tra xem chuỗi đó có phải chuỗi đối xứng hay không (đọc xuôi hay ngược đều như nhau, không tính khoảng trắng, không phân biệt hoa thường), kết quả trả về true hoặc false.
// Ví dụ 'Race car' trả về true, 'hello world' trả về false.
function checkSymmetry(originString) {
  let lowerCaseAndNoSpaceString = originString.toLowerCase().split(' ').join('');
  let reverse = '';
  for (let i = lowerCaseAndNoSpaceString.length - 1; i >= 0; i--) {
    reverse = reverse + lowerCaseAndNoSpaceString[i];
  }
  return reverse === lowerCaseAndNoSpaceString;
}

console.log(checkSymmetry('RACE car'));
console.log(checkSymmetry('Fuck car'));

// Bài 9: Kiểm tra 1 chuỗi có phải là chuỗi viết hoa hay không?
function checkUpperCase(originString) {
  for (let i = 0; i < originString.length; i++) {
    if (originString[i] !== originString[i].toUpperCase()) return false;
  }
  return true;
}

console.log(checkUpperCase('Uppercase'));
console.log(checkUpperCase('UPPERCASE'));
console.log(checkUpperCase('LOWERCASE'));
