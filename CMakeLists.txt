set(proj sem_2)

cmake_minimum_required(VERSION 3.10)
project(sem_2)

set(CMAKE_CXX_STANDARD 20)

add_executable(proj task_1.cpp
        task_2.cpp)

if (WIN32)
    # Windows + MinGW
    message("-- Configuring for Windows (MinGW)")

    # Пути к заголовкам и библиотекам
    target_include_directories(proj PRIVATE "C:/local/boost_1_87_0")
    target_link_directories(proj PRIVATE "C:/local/boost_1_87_0/stage/lib")

    # Имена библиотек (Windows)
    target_link_libraries(proj
            boost_thread-mgw13-mt-x64-1_87
            boost_system-mgw13-mt-x64-1_87
    )
elseif (UNIX)
    # Linux/WSL
    message("-- Configuring for Linux/WSL")

    # Флаг для потоков
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pthread")

    # Автоматический поиск Boost (установлен через apt)
    find_package(Boost REQUIRED COMPONENTS thread system)
    target_link_libraries(proj PRIVATE
            Boost::thread
            Boost::system
    )
endif()
