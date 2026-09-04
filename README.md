# Sistema de monitorització de temperatura

Projecte basat en **Arduino** i una aplicació mòbil desenvolupada amb **MIT App Inventor** per monitoritzar la temperatura i altres dades ambientals.

## Sobre el projecte

Aquest projecte consisteix en un sistema capaç de mesurar dades ambientals mitjançant sensors connectats a un Arduino i enviar-les a una aplicació Android.

L'aplicació permet consultar les dades de manera senzilla des del mòbil, fent que l'Arduino actuï com a dispositiu de mesura.

## Components

* Arduino
* Sensor de temperatura **DHT11**
* Sensor d'humitat integrat al DHT11
* Dispositiu Android
* Sensor Bluetooth
* Cablejat i components necessaris

## Funcionament

El sistema funciona de la següent manera:

1. El **DHT11** mesura la temperatura i la humitat.
2. L'**Arduino** llegeix les dades del sensor.
3. Les dades es processen i s'envien al dispositiu mòbil.
4. L'aplicació Android rep les dades i les mostra a l'usuari.

## Codi

El codi d'aquest repositori correspon a la part del projecte que funciona a l'**Arduino**.

## Aplicació Android

L'aplicació ha estat desenvolupada amb **MIT App Inventor** i està pensada per facilitar la visualització de les dades obtingudes per l'Arduino.

**APK:**
<iframe frameborder="0" src="https://itch.io/embed/4972579" width="552" height="167"><a href="https://fustcoma.itch.io/termometre">Termòmetre by fustcoma</a></iframe>

## Llicència

Aquest projecte està publicat sota la **llicència MIT**.

## Autor

**fustcoma**

---

