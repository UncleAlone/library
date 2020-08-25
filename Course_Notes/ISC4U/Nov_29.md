# Corse Notes On Nov. 29

<h2 id="1">Elements Of A Computer</h2>

* Hardware (Physical components of the computer):
  * <p id="1.1">Main Memory:</id>

    * Stores programs, data and results.
    * Most computers have two types of main memory.
      * <p id="1.1.1"><b>R</b>andom <b>A</b>ccess <b>M</b>emory (<b>RAM</b>):</p>
  
        * temporary storage of programs and data.
        * temporarily stores programs while they are being executed (carried out) by the computer.
        * also temporarily stores such da as numbers, names, and even pictures while a program is manipulating them.
        * usually volatile memory. which means that everything in RAM will be lost when the computer is switched off.

      * <p id="1.1.2"><b>R</b>ead-<b>O</b>nly <b>M</b>emory (<b>ROM</b>):</p>

        * stores information permanently within the computer.
        * computer can retrieve (or read), but cannot store (or write) information in ROM, hence its name is **read-only**.
        * ROM is not volatile, the data stored there do not disappear when the computer is switch off.
        * Start-up instructions and other critical instruction are bummed into ROM chips at the factory.
  * Secondary Memory, which includes storage devices, such as:
    * CDs
    * DVDs
    * Flash Drives
  * Central Processing Unit (CPU)
  * Input Devices, such as:
    * Keyboards
    * Mouses
    * Touch Pads
    * Scanners
    * Joysticks
  * Output Devices, such as:
    * Monitors
    * Printers
    * Speakers
    * **Touch Screen** is both a input and output device.
* Software
* <p id="1.3">Program:</p>

  * is a set of instructions that enables a computer to perform a certain task.
  * Initially, the task was very difficult, requiring programmers to write their program instructions as long binary numbers (sequences of 0s and 1s)
  * High-level programming languages such as C make programming much easier.

<h2 id="2">Memory</h2>

* The memory of a computer as an ordered sequence of storage location called **memory cells**
* Each *memory cells* has a unique address that indicates its relative position in memory
* The ability to store programs as well as data is called the **stored program concept**: A program's instructions must be stored in main memory before they can be executed.

<h2 id="3">MEMORY CONT.</h2>

* A memory cell is actually a grouping of smaller units called **bytes**. A **byte** is amount of storage required to store a single character.
* A **byte** is composed of even smaller units of storage called **bits**. The term **bit**, derived from the word **b**inary dig**it**.
* **Bits** are the smallest element a computer can deal with.
* **Binary** refers to a number system based on two numbers. 0 and 1, so a bit is either a 0 or a 1. Generally, there are 8 **bits** to a **byte**.

<h2 id="4">How Computer Works</h2>

1. the information are transported from **secondary storage** to **main memory**
2. **user** must supply some data to be processed.
3. the data are sent from **input device** into **main memory**.
4. the **central processing unit** is accessed and manipulated.
5. the *result* is sent back **main memory**.
6. *displayed* on the **output device**.

<h2 id="5">Storage And Retrieval Of Information In Memory</h2>

* Each value in memory is represented by a particular pattern of 0s and 1s. A computer can either **store** a value or **retrieve** a value.
* To **store** a value, the computer sets each bit of a selected memory cell to either 0 or 1, <u>destroying the previous contents of the cell in the process.</u>
* To **retrieve** a value from a memory cell, the computer <u>copies the pattern of 0s and 1s stored in that cell to another storage area for processing</u>: the copy operation <u>does not destroy the contents of the cell</u> whose value is retrieved.
