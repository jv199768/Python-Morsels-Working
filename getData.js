// Async/await example
async function getData() {
  try {
    const a = await getData();
    const b = await getMoreData(a);
    const c = await getMoreData(b);
    const d = await getMoreData(c);
    const e = await getMoreData(d);
    // Do something with the data
  } catch (error) {
    // Handle any errors
  }
}

getData();
