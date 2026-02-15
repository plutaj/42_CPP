/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jozefpluta <jozefpluta@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 08:50:59 by jozefpluta        #+#    #+#             */
/*   Updated: 2026/02/15 09:07:28 by jozefpluta       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include "Data.hpp"

int main() {
    
    Data data(42, "test");
    
    uintptr_t unsig_int_value;
    Data *data_ptr;
    
    std::cout << "Data address is :         " << &data << std::endl;
    
    unsig_int_value = Serializer::serialize(&data);
    std::cout << "Data pointer to UINT is : " << unsig_int_value << std::endl;
    
    data_ptr = Serializer::deserialize(unsig_int_value);
    std::cout << "Data pointer to UINT is : " << data_ptr << std::endl;
    
    if (&data == data_ptr)
        std::cout << "OK: pointers match" << std::endl;
    else
        std::cout << "ERROR: pointers do not match" << std::endl;    

    return 0;
}