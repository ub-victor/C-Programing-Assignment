
# C Programming Assignment

(This is a converted Markdown version of your uploaded PDF.)

------------------------------------------------------------------------

## Q1. Hospital Patient Triage & Bed Allocation

**a)** Define a structure named `Patient` with fields:\
- `id` (int)\
- `name` (char\[40\])\
- `age` (int)\
- `priority` (int: 1=Critical, 2=Serious, 3=Stable)\
- `bedNo` (int: -1 if not assigned)

**b)** Write a function prototype and definition for:\
`void assignBeds(Patient p[], int n, int totalBeds);`

**c)** Explain with an example how sorting is used in the triage system.

**d)** Expected output for:\
(1, Alice, 45, 1), (2, John, 70, 3), (3, Eric, 50, 2)\
`totalBeds = 2`

------------------------------------------------------------------------

## Q2. University Course Registration & Capacity Control

**a)** Define `struct Course` with fields:\
`courseId`, `courseName`, `capacity`, `enrolledCount`.

**b)** Write a function:\
`int findCourseIndex(const Course courses[], int n, int courseId);`

**c)** Write logic for registering a student. If full, mark waitlisted.

**d)** State two challenges of using arrays in registration.

------------------------------------------------------------------------

## Q3. Fleet Fuel Efficiency Tracker

**a)** Define `struct Truck` with:\
`truckId`, `driverName`, `distance[10]`, `fuelUsed[10]`, `tripCount`,
`avgKmPerLitre`.

**b)** Write a function to compute `avgKmPerLitre`.

**c)** Explain sorting trucks by efficiency.

**d)** Compute avg for:\
`distance = {100, 120}`, `fuel = {10, 12}`.

------------------------------------------------------------------------

## Q4. Smart Shopping Cart With Discounts

**a)** Create `struct Item` and `struct CartLine`.

**b)** Write `addItemToCart(...)` updating `cartCount` and `lineTotal`.

**c)** Use a function pointer to apply GOLD, SILVER, NONE discounts.

**d)** Give one advantage of using function pointers.

------------------------------------------------------------------------

## Q5. City Weather Station Aggregator

**a)** Define `struct City` with:\
`name`, `temps[7]`, `avgTemp`, `maxTemp`, `minTemp`.

**b)** Implement `void computeCityStats(City cities[], int n);`

**c)** Write function returning hottest city index.

**d)** Output for Kigali:\
`temps = {25, 27, 30, 29, 26, 28, 31}`

------------------------------------------------------------------------

## Q6. Union-Based Multi-Format Identifier

**a)** Define `union PatientID` (nationalId or passport).\
Define `struct PatientInfo` with `isForeign` flag.

**b)** Explain why union saves memory.

**c)** Identify the logical error in:\
`p.id.nationalId = 123; p.id.passport = "...";`

**d)** Rewrite code to print only the correct ID.

------------------------------------------------------------------------

## Q7. Typedef for Cleaner APIs

**a)** `typedef Amount`, `CustomerName`, `Payment` struct alias.

**b)** `typedef` a function pointer
`FeeStrategy: Amount f(Amount base);`

**c)** Write `applyFee(Payment *p, FeeStrategy fs);`

**d)** Give two advantages of typedef with function pointers.

------------------------------------------------------------------------

## Q8. Enumerations for Modes and States

**a)** Define enums `MembershipLevel` and `PaymentMethod`; define
`struct OrderSummary`.

**b)** Write `computeDiscount(level, gross)` using switch.

**c)** Write `computePaymentFee(method, amount)`.

**d)** Explain why using raw integers instead of enums causes bugs.


_Prepare by Victor_