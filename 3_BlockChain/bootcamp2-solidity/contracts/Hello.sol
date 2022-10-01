// SPDX-License-Identifier: MIT
pragma solidity >=0.8.0 <0.9.0;

import "@openzeppelin/contracts/access/Ownable.sol";

contract HelloWorld is Ownable {
    function Hello() external pure returns (uint256) {
        return 9;
    }
}
