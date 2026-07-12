# 🏸 Hệ Thống Theo Dõi Trận Đấu Cầu Lông

Một ứng dụng C++ toàn diện để theo dõi, ghi nhận và phân tích trận đấu cầu lông với độ chính xác tuyệt đối.

## 🎯 Tính Năng Chính

- **Quản Lý Trận Đấu**: Theo dõi điểm số, set, hiệp trong trận đấu
- **Cơ Sở Dữ Liệu Vận Động Viên**: Lưu trữ thông tin, hạng đấu của các vận động viên
- **Hệ Thống Challenge**: Cho phép thử thách quyết định (giống như Hawk-Eye)
- **Badminton AI**: Chatbot trí tuệ nhân tạo trả lời các câu hỏi về trận đấu
- **Thống Kê & Phân Tích**: Theo dõi hiệu suất, lịch sử trận đấu
- **Xếp Hạng Vận Động Viên**: Quản lý và cập nhật xếp hạng

## 📋 Yêu Cầu

- C++17 trở lên
- Trình biên dịch: g++, clang hoặc MSVC
- SQLite3 (tùy chọn, để lưu trữ dữ liệu)

## 🚀 Cách Sử Dụng

```bash
# Biên dịch chương trình
g++ -std=c++17 -o badminton_app main.cpp src/*.cpp

# Chạy chương trình
./badminton_app
```

## 📁 Cấu Trúc Dự Án

```
badminton-tracking-system/
├── src/
│   ├── Player.cpp              # Quản lý dữ liệu vận động viên
│   ├── Match.cpp               # Quản lý trận đấu
│   ├── Ranking.cpp             # Quản lý xếp hạng
│   ├── ChallengeSystem.cpp      # Hệ thống challenge
│   ├── BadmintonAI.cpp         # Engine AI trả lời câu hỏi
│   └── Database.cpp            # Quản lý CSDL
├── include/
│   ├── Player.h
│   ├── Match.h
│   ├── Ranking.h
│   ├── ChallengeSystem.h
│   ├── BadmintonAI.h
│   └── Database.h
├── main.cpp                    # Chương trình chính
└── README.md
```

## 💡 Các Chức Năng Chính

### 1. Quản Lý Vận Động Viên
- Thêm/xóa vận động viên
- Xem thông tin chi tiết (tên, hạng đấu, quốc gia, etc.)
- Cập nhật hạng đấu

### 2. Quản Lý Trận Đấu
- Tạo trận đấu mới
- Ghi nhận điểm số theo thời gian thực
- Lưu lịch sử trận đấu
- Xem chi tiết từng set/hiệp

### 3. Hệ Thống Challenge
- Yêu cầu thử thách quyết định
- Xem lại kết quả (mock simulation)
- Số lần challenge còn lại

### 4. Badminton AI
- Trả lời câu hỏi về quy luật cầu lông
- Phân tích trận đấu
- Gợi ý chiến thuật
- Trả lời bằng tiếng Việt

### 5. Thống Kê
- Win/Loss ratio
- Điểm trung bình
- Lịch sử trận đấu
- Xếp hạng

## 📝 Ví Dụ Sử Dụng

```
================== HỆ THỐNG THEO DÕI CẦU LÔNG ==================

1. Quản lý vận động viên
2. Tạo trận đấu
3. Ghi nhận điểm
4. Hệ thống Challenge
5. Badminton AI
6. Xem thống kê
7. Thoát

Chọn: 1
```

## 🤖 Badminton AI

Chatbot AI có thể trả lời những câu hỏi như:
- "Luật cầu lông là gì?"
- "Làm sao để cải thiện kỹ thuật smash?"
- "Điểm số hiện tại là bao nhiêu?"
- "Ai đang dẫn trước?"
- "Giải thích về hệ thống challenge"

## 📊 Công Nghệ

- **Ngôn ngữ**: C++17
- **Cấu trúc dữ liệu**: Vector, Map, Class
- **Giao diện**: Console (Menu-driven)
- **Xử lý**: OOP, Design Patterns

## 👨‍💻 Tác Giả

Được tạo bởi: Copilot
Ngôn ngữ: Tiếng Việt

## 📄 Giấy Phép

MIT License

---

**Mục đích**: Giáo dục & Thực hành lập trình C++

