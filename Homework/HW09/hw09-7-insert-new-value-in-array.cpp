/*
    จากอาเรย์เดิม ที่มีค่าอยู่ก่อนแล้วคือ { 9, 2, 6, 1, 7 } จงเขียนโปรแกรมเพื่อรับค่าจากผู้ใช้อีก N จำนวน เพื่อนำไปต่อในอาเรย์เดิม และจัดเรียงใหม่จากน้อยไปยังมาก
    
    Test case:
        Enter new element of Array :
            4
        Input :
            3
        Input :
            4
        Input :
            2
        Input :
            5
    Output:
        Old Array: 9 2 6 1 7
        New Array: 1 2 2 3 4 4 5 6 7 9
*/

#include <stdio.h>

int main() {
    
    int oldarray[ 5 ] = { 9 , 2 , 6 , 1 , 7 } ;
    int n , temp ;

    printf ( "Enter new element of Array :\n" ) ;
    scanf ( "%d", &n ) ;

    // สร้าง array ตัวใหม่ พร้อมรับค่า
    int inputarray[ n ] ;
    for ( int i = 0 ; i < n ; i++ ) {
        printf ( "Input :\n" ) ;
        scanf ( "%d", &inputarray[ i ] ) ;
    } // end for

    // รวม array
    int newarray[ n + 5 ] ;
    for ( int i = 0 ; i < n ; i++ ) {
        newarray[ i ] = inputarray[ i ] ;
    } // end for

    for ( int i = n ; i < n + 5 ; i++ ) {
        newarray[ i ] = oldarray[ i - n ] ;
    } // end for

    // เรียงจากเลขน้อยไปหามาก
    for ( int i = 0 ; i < n + 5 ; i++ ) {
        for ( int k = i + 1 ; k < n + 5 ; k++ ) {
            if ( newarray[ i ] > newarray[ k ] ) {
                temp = newarray[ i ] ;
                newarray[ i ] = newarray[ k ] ;
                newarray[ k ] = temp ;
            } // end if
        } // end for
    } // end for
    
    // แสดงค่า
    printf ( "Old Array:" ) ;
    for ( int i = 0 ; i < 5 ; i++) {
        printf ( " %d", oldarray[ i ] ) ;
    } // end for
    
    printf ( "\nNew Array:" ) ;
    for ( int i = 0 ; i < n + 5 ; i++ ) {
        printf ( " %d", newarray[ i ] ) ;
    } // end for
    
    return 0 ;
}