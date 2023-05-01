const form = document.querySelector('#dataForm');
const SSIDKeyForm = document.getElementById('cuadroTexto');

const toggleSwitchWiFi = document.getElementById('switchWiFi');
const toggleSwitchHour = document.getElementById('switchHour');
const toggleSwitchWeather = document.getElementById('switchWeather');

const textBoxWifiSSID = document.getElementById('tBSSID');
const textBoxWifiPass = document.getElementById('tBPassword');
const dateBoxSelector = document.getElementById('dateHourSelect');
const timeZoneSelector = document.getElementById('timeZone');

toggleSwitchWiFi.addEventListener('change', function() {
  if(this.checked) {
    textBoxWifiSSID.removeAttribute('disabled');
    textBoxWifiPass.removeAttribute('disabled');
    toggleSwitchWeather.removeAttribute('disabled');
    console.log(textBoxWifiSSID.value);
  } else {
    textBoxWifiSSID.setAttribute('disabled', '');
    textBoxWifiPass.setAttribute('disabled', '');
    toggleSwitchWeather.setAttribute('disabled', '');
  }    
});

toggleSwitchHour.addEventListener('change', function() {
    if(this.checked) {
        dateBoxSelector.removeAttribute('disabled');
        timeZoneSelector.setAttribute('disabled', '');
    } else {
        dateBoxSelector.setAttribute('disabled', '');
        timeZoneSelector.removeAttribute('disabled');
    }    
  });

  form.addEventListener('submit', (event) => {
    event.preventDefault();
  
  const formData = new FormData();
  formData.append('campo1', input1.value);
  formData.append('campo2', input2.value);

  fetch('/save', {
    method: 'POST',
    body: formData
  })
  .then(response => {
    // Manejar la respuesta del servidor
  })
  .catch(error => {
    // Manejar el error
  });
  });