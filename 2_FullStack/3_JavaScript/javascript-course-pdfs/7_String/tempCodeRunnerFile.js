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
console.log(getFullName('Alice'));

console.log(getFullName('Alice', ''));

console.log(getFullName('', 'Nguyen'));

console.log(getFullName('Bob', 'Tran'));

console.log(getFullName('john', 'pHAm'));

console.log(getFullName('76786', '7678'));