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

// B??i 1. Vi???t 1 function ki???m tra 1 chu???i c?? n???m trong chu???i c??n l???i hay kh??ng. N???u c?? tr??? v??? true, n???u kh??ng tr??? v??? false
// - ?????u v??o c?? 2 tham s??? : Tham s??? 1 l?? chu???i ban ?????u, tham s??? 2 l?? chu???i c???n ki???m tra
function checkStringExists(bigString, tinyString) {
  return bigString.includes(tinyString);
}

console.log(checkStringExists('i love you', 'love'));
console.log(checkStringExists('i love you', 'hate'));

// B??i 2. Vi???t h??m r??t ng???n chu???i b???ng c??ch c???t ra 8 k?? t??? cu???i c???a 1 chu???i v?? th??m d???u ba ch???m ??? cu???i chu???i.
// V?? d???: shortenString('Xin ch??o c??c b???n') => K???t qu??? tr??? v??? l?? 'Xin ch??o...'
function shortenString(originString) {
  if (originString.length <= 16) return originString;
  return originString.substring(0, originString.length - 8) + '\u2026';
}

console.log(shortenString('Xin ch??o c??c b???n'));
console.log(shortenString('T??i t??n l?? L?? Th??nh, m?? sinh vi??n B21DCAT176'));

// B??i??3. Vi???t h??m c?? t??c d???ng bi???n 1 chu???i th??nh ch??? vi???t hoa t??? ?????u ti??n.
// V?? d???: capitalizeString('ch??o M???nG ?????n v???i xTP') => K???t qu??? tr??? v??? l?? 'Ch??o M???ng ?????n V???i XTP'
function capitalizeString(originString) {
  const lowerCaseString = originString.toLowerCase(); //Change All to lower case
  const subStr = lowerCaseString.split(' '); // Split all parts into substrings
  for (let i = 0; i < subStr.length; i++) {
    subStr[i] = subStr[i][0].toUpperCase() + subStr[i].slice(1);
  }
  return subStr.join(' ');
}

console.log(capitalizeString('ch??o M???nG ?????n v???i xTP'));

// B??i 4. Cho 1 chu???i, h??y vi???t h??m c?? t??c d???ng sao ch??p ???? chu???i l??n 10 l???n.
function repeatString_4(originString, timeRepeats) {
  return originString.repeat(timeRepeats);
}

console.log(repeatString_4('Le', 10));

// B??i 5. Cho 1 chu???i, h??y vi???t h??m c?? t??c d???ng sao ch??p ???? chu???i l??n 10 l???n, ng??n c??ch nhau b???i d???u g???ch ngang.
// V?? d???: repeatString('a') => K???t qu??? tr??? v??? l?? 'a-a-a-a-a-a-a-a-a-a'
// B??i 6. Cho 1 chu???i v?? 1 s??? nguy??n n > 1, h??y vi???t h??m c?? t??c d???ng sao ch??p ???? chu???i l??n n l???n, ng??n c??ch nhau b???i d???u g???ch ngang.
// V?? d???: repeatString('a', 5) => K???t qu??? tr??? v??? l?? 'a-a-a-a-a'
function repeatString_5(originString, timeRepeats, link) {
  let originStringWithLink = originString + link;
  let repeatedString = originStringWithLink.repeat(timeRepeats);
  return repeatedString.slice(0, -1);
}

console.log(repeatString_5('Le', 10, '-'));
console.log(repeatString_5('A', 10, '+'));
console.log(repeatString_5('Z', 10, '&'));

// B??i 7. Vi???t h??m ?????o ng?????c chu???i. Vi???t dunction v???i ?????u v??o l?? 1 chu???i string. Tr??? v??? chu???i ?????o ng?????c c???a chu???i ????
// V?? d???: reverseStrin('Hello') => K???t qu??? tr??? v??? l?? 'olleH'
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

// B??i 8. Cho 1 chu???i, ki???m tra xem chu???i ???? c?? ph???i chu???i ?????i x???ng hay kh??ng (?????c xu??i hay ng?????c ?????u nh?? nhau, kh??ng t??nh kho???ng tr???ng, kh??ng ph??n bi???t hoa th?????ng), k???t qu??? tr??? v??? true ho???c false.
// V?? d??? 'Race car' tr??? v??? true, 'hello world' tr??? v??? false.
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

// B??i 9: Ki???m tra 1 chu???i c?? ph???i l?? chu???i vi???t hoa hay kh??ng?
function checkUpperCase(originString) {
  for (let i = 0; i < originString.length; i++) {
    if (originString[i] !== originString[i].toUpperCase()) return false;
  }
  return true;
}

console.log(checkUpperCase('Uppercase'));
console.log(checkUpperCase('UPPERCASE'));
console.log(checkUpperCase('LOWERCASE'));
