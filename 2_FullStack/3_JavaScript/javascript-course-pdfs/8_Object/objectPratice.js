// CE14: https://www.udemy.com/course/javascript-cho-nguoi-moi-bat-dau-2021/learn/quiz/5291368#overview
function cloneObject(obj) {
  const clonedObject = Object.assign({}, obj);
  return clonedObject;
}

//CE15: https://www.udemy.com/course/javascript-cho-nguoi-moi-bat-dau-2021/learn/quiz/5291990#overview
function compareObject(obj1, obj2) {
  if (getLengthObject(obj1) !== getLengthObject(obj2)) return false;
  for (let key in obj1) {
    if (obj1[key] !== obj2[key]) return false;
  }
  return true;
}

let userList = [
  { name: 'Nguyễn Tiến Đạt', age: 60, email: 'support@xtp.vn', isStatus: false },
  { name: 'Lê Thành', age: 40, email: 'lethanh210603@gmail.com', isStatus: true },
  { name: 'Gián', age: 19 },
];

// Bài 1. Viết hàm để lấy danh sách các key của object
// vd :
// var user = {
//     name : "Nguyễn Tiến Đạt",
//     age : 25,
//     email : 'support@xtp.vn'
// };
// => name,age,email
function getObjectKeys(obj) {
  console.log(Object.keys(obj));
}

getObjectKeys(userList[0]);
getObjectKeys(userList[1]);
getObjectKeys(userList[2]);

// Bài 2. Viết hàm để lấy danh sách các value của object
function getObjectValues(obj) {
  console.log(Object.values(obj));
}

getObjectValues(userList[0]);
getObjectValues(userList[1]);
getObjectValues(userList[2]);

// Bài 3. Viết hàm kiểm tra key có tồn tại trong Object không
function checkObjectExists(obj, key) {
  return key in obj;
}

console.log(checkObjectExists(userList[0], 'name'));
console.log(checkObjectExists(userList[1], 'naMe'));
console.log(checkObjectExists(userList[2], 'age.'));

// Bài 4. Viết hàm kiểm tra Object có độ dài bao nhiêu
function getLengthObject(obj) {
  return Object.keys(obj).length;
}

console.log(getLengthObject(userList[0]));
console.log(getLengthObject(userList[1]));
console.log(getLengthObject(userList[2]));

// Bài 5. Cho mảng các user
// mỗi user có cấu trúc như sau

// user = {
//     name : string,
//     age : number,
//     isStatus : bool
// }
// Viết function lấy ra những user có tuổi > 25 và isStatus = true
function getUsers(obj) {
  for (let key in obj) {
    if (obj.age > 25 && obj.isStatus === true) {
      console.log('key:', key);
      console.log('value:', obj[key]);
    }
  }
}
getUsers(userList[0]);

// Bài 6. Viết function sắp xếp các user theo tuổi tăng dần
function compareAge(user1, user2) {
  return user1.age - user2.age;
}

function sortUsersByAge(ArrayUsers) {
  ArrayUsers.sort(compareAge);
  for (let i = 0; i < ArrayUsers.length; i++) {
    getObjectValues(ArrayUsers[i]);
  }
}

sortUsersByAge(userList);
