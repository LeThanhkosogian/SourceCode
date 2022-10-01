export function hasTwoDigitsWithSumV1(n, sum) {
  if (n <= 9 || n >= 1000000 || sum <= 0 || sum >= 19) return false;
  const Array = n.toString().split('');
  let i = 0;
  while (i < Array.length) {
    let markup = sum - parseInt(Array[i]);
    if (Array.includes(markup.toString())) return true;
    console.log(markup);
    i++;
  }
  return false;
}
