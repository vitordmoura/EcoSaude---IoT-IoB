# GS2 - IoT

## 📌 Visão Geral

Sistema embarcado para monitoramento de habitats espaciais, simulando condições de pressão atmosférica em colônias lunares ou marcianas utilizando um ESP32 no Wokwi.

O sistema classifica o ambiente em três estados:

- 🟢 Seguro
- 🟡 Alerta
- 🔴 Crítico

---

## 🎯 Problema

Em ambientes espaciais, pequenas variações de pressão podem indicar falhas estruturais capazes de comprometer a segurança dos astronautas. O sistema realiza o monitoramento contínuo e identifica possíveis situações de risco em tempo real.

---

## Lógica do Sistema

A classificação do ambiente é realizada por regras implementadas no microcontrolador:

- 🔴 *CRÍTICO:* pressão < 70 kPa ou > 240 kPa, ou desvio > 30 kPa.
- 🟡 *ALERTA:* pressão em faixa intermediária de operação ou desvio > 15 kPa.
- 🟢 *SEGURO:* operação estável dentro da faixa ideal.

---

## 👥 Integrantes

- Lucas Reis Diniz — RM552838
- Thiago Araújo Vieira — RM553477
- Vitor de Moura Nascimento — RM553806


## Links:

Link Wokwi: https://wokwi.com/projects/465773476124973057

Link Video:https://youtu.be/-ISq23BoVc4?si=nV2POw0CEAPHhw23
