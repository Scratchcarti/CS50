const centre = ()=>{
    console.log("run")
    const body = document.body
    const board = document.getElementById("board-layout-main")

    const boardCoordinates = board.getBoundingClientRect();
    const leftDistanceBoard = boardCoordinates.left

    const computedStyleBoard = window.getComputedStyle(board);
    const paddingLeft = parseFloat(computedStyleBoard.paddingLeft);
    const paddingRight = parseFloat(computedStyleBoard.paddingRight);
    const contentBoardWidthWithoutPadding = board.clientWidth - paddingLeft - paddingRight;

    const screenWidth = body.offsetWidth

    board.style.paddingLeft = `${((screenWidth - contentBoardWidthWithoutPadding )/2) - leftDistanceBoard}px`
 

}
centre();


const sideBar = document.getElementById("sb")
const board = document.getElementById("board-layout-main")
const resizeObserver = new ResizeObserver(() => {
    centre();
});

resizeObserver.observe(sideBar);
resizeObserver.observe(board);



// sidebar-component width
const sideBarComponent = document.querySelector(".sidebar-component")
if (sideBarComponent)
    sideBarComponent.style.width = `100%`