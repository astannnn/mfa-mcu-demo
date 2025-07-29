
import time

print("🔐 MFA Button Simulation (v2)")
print("Press Enter to simulate button press...")
input("▶️ Press Enter to START holding the button")
start = time.time()

input("⏹️ Press Enter to RELEASE the button")
end = time.time()

duration = (end - start) * 1000  # milliseconds
print(f"Press duration: {int(duration)} ms")

if 1500 <= duration <= 4000:
    print("✅ Access granted")
elif duration < 1500:
    print("❌ Access denied — press was too short")
else:
    print("❌ Access denied — press was too long")
