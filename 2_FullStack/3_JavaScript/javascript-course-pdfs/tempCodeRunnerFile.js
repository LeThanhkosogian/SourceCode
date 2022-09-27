function getDaysInMonth(month, year) {
  return new Date(year, month, 0).getDate();
}
console.log(getDaysInMonth(2, 1800));
console.log(getDaysInMonth(3, 2021));