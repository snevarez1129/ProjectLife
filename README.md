myInventory

User Stories
    * A user will enter the items they have in their closet to be stored in their inventory - Req-5, 6
    * A user will be able to access their inventory in a text file once it is complete - Req 1, 2, 3, 4

Requirements
    1. The program should be written as an API
    2. The program should return a txt file titled "inventory_mm_dd_yyyy.txt"
    3. The program should return an error log file, extension .txt, if an error occurs while building an inventory
    4. The program should title the error log file as "error_mm_dd_yyyy.txt"
    5. The program should group items into the following categories: <base layers> <tops> <outerwear> <bottoms> <accessories> <extras>
    6. The program should accept user input in the following format: <category> <item> <brand> <color>
    7. The program should log any errors that occur while building an inventory
    8. The program should write user input to the inventory

Notes
    * the program should build the inventory in memory first and then write to an output file
    * linked-list based on the <category> and <item>
        <category> Tops
            <item> Shirts
            <item> Jerseys
            <item> T-shirts
