// https://viblo.asia/p/ham-xu-ly-ngay-thang-date-trong-javascript-XL6lA47DZek

// Bài 1: Viết một hàm JavaScript để lấy ngày hiện tại
// Lưu ý: Truyền dấu phân tách làm đối số.
// getCurrentDate("/") => 17/08/2020
function getCurrentDate(iconLink) {
  const Today = new Date();
  return Today.getDate() + iconLink + Number(Today.getMonth() + 1) + iconLink + Today.getFullYear();
}
console.log(getCurrentDate('/'));

// Bài 2: Viết một hàm JavaScript để lấy số ngày trong tháng
// getDaysInMonth(8, 2020) => 31
function getDaysInMonth(year, month) {
  return new Date(year, month, 0).getDate();
}
console.log(getDaysInMonth(1800, 2));
console.log(getDaysInMonth(2021, 3));

// Bài 3: Viết một hàm JavaScript để kiểm tra xem một ngày có phải là ngày cuối tuần hay không.
function checkWeekend(year, month, day) {
  return new Date(year, month, day).g();
}
console.log(checkWeekend(2022, 9, 27));
console.log(checkWeekend(2022, 10, 25));
