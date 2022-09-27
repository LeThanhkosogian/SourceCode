// CE1: https://www.udemy.com/course/javascript-cho-nguoi-moi-bat-dau-2021/learn/quiz/5291260#overview
function getTicketPrice(age) {
  if (age <= 0 || age > 125) return -1;

  let priceTicket;

  if (age > 12 && age < 70) {
    priceTicket = 50000;
  } else {
    if (age >= 6 && age <= 12) {
      priceTicket = 20000;
    } else {
      if (age < 6 || age >= 70) priceTicket = 0;
    }
  }

  return priceTicket;
}

// CE2: https://www.udemy.com/course/javascript-cho-nguoi-moi-bat-dau-2021/learn/quiz/5291310#overview
function sayHello(languageCode) {
  const languageMap = {
    en: "Hello",
    fr: "Bonjour",
    cn: "Nǐn hǎo",
    ko: "Anyoung haseyo",
    ja: "Konnichiwa",
    vi: "Xin Chào đkm",
  };

  return languageMap[languageCode] || "Hello";
}


