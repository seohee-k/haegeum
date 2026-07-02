# HAEGEUM

ROS2 Jazzy 기반 다중 무인체(UAV/UGV) 협업 시스템 프로토타입

---

# Project Overview

HAEGEUM은 UAV와 UGV가 협력하여 목표를 탐지하고,
AI Commander가 가장 적합한 로봇에게 임무를 할당하는
ROS2 기반 멀티 에이전트 시스템입니다.

현재 버전은 실제 센서 대신 Target Generator를 사용하여
전투 상황을 시뮬레이션하는 Prototype입니다.

---

# System Architecture

```
                   +----------------+
                   |Target Generator|
                   +-------+--------+
                           |
                     TargetDetected
                           |
                           v
                  +----------------+
                  | AI Commander   |
                  |----------------|
                  | BattleManager  |
                  | DecisionEngine |
                  | Allocator      |
                  +-------+--------+
                          |
                     Assignment
              +-----------+-----------+
              |                       |
              v                       v
        +-----------+          +-----------+
        | UAV Agent |          | UGV Agent |
        +-----+-----+          +-----+-----+
              |                       |
        RobotStatus             RobotStatus
              |                       |
              +-----------+-----------+
                          |
                    Battlefield State
```

---

# Package Structure

```
haegeum_ws
├── ai_commander
│   ├── battle_manager.py
│   ├── allocator.py
│   ├── decision_engine.py
│   └── ai_commander.py
│
├── target_generator
│
├── uav_agent
│
├── ugv_agent
│
├── haegeum_interfaces
│
└── threat_assessment
```

---

# Main Components

## AI Commander

- Robot 상태 관리
- Target 관리
- Decision Engine 실행
- Assignment 생성

---

## UAV Agent

- RobotStatus Publish
- Assignment Subscribe
- 목표 지점 비행
- Mission Complete Event 발생

---

## UGV Agent

- RobotStatus Publish
- Assignment Subscribe
- 목표 지점 이동
- Mission Complete Event 발생

---

## Target Generator

랜덤 TargetDetected 메시지 생성

Prototype에서는 실제 센서를 대신한다.

---

## Battle Manager

관리 정보

- Friendly Robot
- Target
- Battlefield Summary

---

## Decision Engine

각 로봇의 점수를 계산한다.

평가 요소

- Distance
- Battery
- Robot State

가장 높은 점수의 Robot을 선택한다.

---

# ROS2 Topics

| Topic | Type | Description |
|--------|------|-------------|
| /robot_status | RobotStatus | Robot 상태 |
| /target_detected | TargetDetected | 목표 탐지 |
| /assignment | Assignment | 임무 할당 |
| /event | Event | 이벤트 |

---

# Execution

Terminal 1

```bash
source install/setup.bash
ros2 run ai_commander ai_commander
```

Terminal 2

```bash
source install/setup.bash
ros2 run target_generator target_generator
```

Terminal 3

```bash
source install/setup.bash
ros2 run uav_agent uav_agent
```

Terminal 4

```bash
source install/setup.bash
ros2 run ugv_agent ugv_agent
```

---

# Prototype Scenario

1. Target Generator가 Target 생성

↓

2. AI Commander가 Target 수신

↓

3. Decision Engine이 최적 Robot 선택

↓

4. Assignment 생성

↓

5. UAV 또는 UGV가 목표 이동

↓

6. Mission Complete

---

# Future Work

- Sensor Data Integration
- VAE 기반 이상탐지
- Threat Assessment
- 다중 Target 동시 처리
- Gazebo 시뮬레이션
- Nav2 연동
- DDS 기반 분산 통신

---

# Environment

- Ubuntu 24.04
- ROS2 Jazzy
- Python 3.12

---

# Author

Kim Seohee
