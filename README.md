# Qt Vehicle CAN Dashboard

> Ứng dụng dashboard xe hơi thời gian thực, hiển thị tốc độ, RPM và các thông số CAN bus từ STM32 qua cổng Serial.

![Language](https://img.shields.io/badge/Language-C++17-blue)
![Framework](https://img.shields.io/badge/Framework-Qt_6_QML-brightgreen)
![Protocol](https://img.shields.io/badge/Protocol-CAN_2.0-orange)
![MCU](https://img.shields.io/badge/MCU-STM32F103-red)
![Status](https://img.shields.io/badge/Status-Complete-success)

---

## 📌 Tổng quan

Project phát triển tại **FPT Academy** (Oct 2025 – Jan 2026).

Ứng dụng nhận dữ liệu CAN frame từ STM32F103 qua cổng Serial (UART-USB), parse tín hiệu xe (tốc độ, RPM...) và hiển thị real-time lên giao diện dashboard dạng đồng hồ.

---

## 🖥️ Giao diện

> *(Thêm ảnh chụp màn hình dashboard vào đây)*

```
[ Chụp màn hình app đang chạy → kéo thả vào thư mục docs/ ]
```

---

## 🛠️ Tech Stack

| Layer | Technology |
|---|---|
| Backend / CAN logic | C++17 |
| Serial communication | Qt SerialPort |
| UI Framework | Qt 6 / QML |
| MCU phía phần cứng | STM32F103C8T6 |
| Build System | CMake |
| IDE | Qt Creator |

---

## 📁 Cấu trúc Project

```
CAN_Dashboard/
├── main.cpp                    # Entry point
│
├── Backend (C++)
│   ├── cantransport.h / .cpp       # Nhận & parse CAN frame từ Serial
│   ├── serialreader.h / .cpp       # Đọc dữ liệu từ cổng Serial (UART)
│   ├── stm32.h / .cpp              # Giao tiếp với STM32, format dữ liệu
│   ├── realtime.h / .cpp           # Xử lý dữ liệu real-time, emit Qt signals
│   ├── clustercontroller.h / .cpp  # Controller chính, bridge backend → QML
│   └── ecucommandclient.h / .cpp   # Gửi lệnh xuống ECU/STM32
│
├── QML (UI Layer)
│   ├── Main.qml                # Root layout, khởi tạo các component
│   ├── DongHoTocDo.qml         # Đồng hồ tốc độ (speedometer)
│   ├── DongHoRPM.qml           # Đồng hồ RPM
│   ├── CAN.qml                 # Hiển thị raw CAN frame / log
│   ├── CarBackView.qml         # View phía sau xe
│   ├── Chart.qml               # Biểu đồ tín hiệu theo thời gian
│   ├── MyProgressBar.qml       # Component thanh progress tùy chỉnh
│   ├── Mybutton.qml            # Component nút bấm tùy chỉnh
│   └── Icon.qml                # Component icon
│
├── assets/                     # Font, hình ảnh, tài nguyên UI
├── CMakeLists.txt
└── README.md
```

---

## ⚙️ Kiến trúc hệ thống

```
[ STM32F103 Node 1 - Transmitter ]
        |
  Gửi CAN frame (ID + Data[8])
        |
  CAN Bus (CANH / CANL)
        |
[ STM32F103 Node 2 - Receiver ]
        |
  Nhận CAN frame → forward qua UART
        |
  USB-TTL Serial
        |
[ Qt Dashboard App (PC) ]
        |
  SerialReader → đọc byte stream từ cổng COM
        |
  CanTransport → parse CAN frame thô
        |
  STM32 / RealTime → decode tín hiệu (speed, RPM...)
        |
  ClusterController → expose data lên QML qua Q_PROPERTY
        |
  QML UI → DongHoTocDo, DongHoRPM, CAN.qml hiển thị real-time
```

---

## 🚀 Build & Chạy

### Yêu cầu
- Qt 6.x (Qt Quick + Qt SerialPort module)
- CMake 3.16+
- Compiler: MinGW (Windows) hoặc GCC (Linux)
- STM32F103 board + USB-TTL adapter (để test với hardware thật)

### Build

```bash
# Clone repo
git clone https://github.com/YOUR_USERNAME/qt-vehicle-can-dashboard.git
cd qt-vehicle-can-dashboard

# Mở Qt Creator → File → Open Project → chọn CMakeLists.txt
# Chọn Kit phù hợp (Desktop Qt 6.x) → Configure → Build
```

### Kết nối Hardware

1. Flash firmware STM32 (xem repo `stm32-can-communication`)
2. Cắm USB-TTL vào PC
3. Mở app → chọn đúng COM port → Connect
4. Dashboard sẽ hiển thị tín hiệu real-time từ CAN bus

---

## 📊 Phân chia công việc trong team

| Phần | Effort |
|---|---|
| Backend C++: CAN parsing, serial comm, signal processing | ~40% |
| QML UI: dashboard layout, gauge components, animations | ~35% |
| CAN simulator + integration testing | ~25% |

---

## 🔑 Kiến thức thu được

- CAN 2.0 frame structure: ID, DLC, Data[8] và cách decode thành tín hiệu xe
- Qt SerialPort API để đọc dữ liệu UART real-time
- Qt signal/slot cơ chế kết nối backend C++ với QML
- QML property binding cho UI phản ứng real-time
- Modular design: tách `CanTransport` / `RealTime` / `ClusterController` độc lập

---

## 🔗 Project liên quan

- **STM32 CAN Communication** → [github.com/YOUR_USERNAME/stm32-can-communication](https://github.com/YOUR_USERNAME/stm32-can-communication)

---

## 👤 Tác giả

**Dang Quang Trung** — Fresher Embedded / Automotive Software Developer  
📧 tdangquang0802@gmail.com

*FPT Academy — Automotive Software Development Program (2025–2027)*
