var getRandomClientId = () => "iot-workshop" + parseInt(Math.random() * 9999999, 10);

var isNumber = (n) => !isNaN(parseFloat(n)) && isFinite(n);
