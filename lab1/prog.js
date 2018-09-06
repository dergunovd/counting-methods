const
  a = 0,
  b = 70,
  k = 4, // V + 1
  e = 10e-12,
  dx = 1;


for (let x = a; x <= b; x += dx) {
  let s = 0,
      n = 1;
  const numenatorDelta = k * x;
  let denomenator = 1;
  let lastNumDenom = 1;
  let cur = numenatorDelta
  s += cur;
  while(Math.abs(cur) >= e) {
    cur *= -numenatorDelta * numenatorDelta;
    cur /= (lastNumDenom + 1);
    cur /= (lastNumDenom + 2);
    s += cur;
    lastNumDenom += 2;
    n++;
  }
  console.log(x, s, n);
}

console.log("---");
for (let x = a; x <= b; x += dx) {
  console.log(x, Math.sin(k*x));
}