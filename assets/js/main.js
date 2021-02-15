$(document).ready(function () {
  $(".menu-mobi").click(function () {
    $(this).toggleClass("active");
    $("#header-bottom > *").toggleClass("nav-active");
    if ($("#header-bottom > *").hasClass("nav-active")) {
      $("body").addClass("no-scroll");
    } else {
      $("body").removeClass("no-scroll");
    }
  });
  $(".slider").owlCarousel({
    loop: true,
    autoplay: true,
    autoplayTimeout: 5000,
    smartSpeed: 800,
    autoplayHoverPause: true,
    nav: true,
    dots: false,
    navText: [
      '<i class="fa fa-angle-left"></i>',
      '<i class="fa fa-angle-right"></i>',
    ],
    items: 1,
  });

  $(".list-posts").owlCarousel({
    loop: true,
    autoplay: true,
    autoplayTimeout: 5000,
    smartSpeed: 800,
    autoplayHoverPause: true,
    margin: 30,
    nav: true,
    dots: false,
    navText: [
      '<i class="fa fa-angle-left"></i>',
      '<i class="fa fa-angle-right"></i>',
    ],
    responsive: {
      0: {
        items: 1,
      },
      600: {
        items: 2,
      },
      1000: {
        items: 3,
      },
    },
  });
  $(".related-posts").owlCarousel({
    loop: true,
    autoplay: true,
    autoplayTimeout: 5000,
    smartSpeed: 800,
    autoplayHoverPause: true,
    margin: 30,
    nav: true,
    dots: false,
    navText: [
      '<i class="fa fa-angle-left"></i>',
      '<i class="fa fa-angle-right"></i>',
    ],
    responsive: {
      0: {
        items: 1,
      },
      600: {
        items: 1,
      },
      1000: {
        items: 2,
      },
    },
  });

  $(".our-team").owlCarousel({
    loop: true,
    autoplay: true,
    autoplayTimeout: 5000,
    smartSpeed: 800,
    autoplayHoverPause: true,
    margin: 30,
    nav: true,
    dots: false,
    navText: [
      '<i class="fa fa-angle-left"></i>',
      '<i class="fa fa-angle-right"></i>',
    ],
    responsive: {
      0: {
        items: 1,
      },
      600: {
        items: 2,
      },
      1000: {
        items: 3,
      },
    },
  });

  // $(".slider-for").slick({
  //   slidesToShow: 1,
  //   slidesToScroll: 1,
  //   arrows: false,
  //   fade: true,
  //   asNavFor: ".slider-nav",
  // });
  // $(".slider-nav").slick({
  //   slidesToShow: 3,
  //   slidesToScroll: 1,
  //   asNavFor: ".slider-for",
  //   dots: true,
  //   centerMode: true,
  //   focusOnSelect: true,
  // });
  // $(".slider-for .item").zoom(); // add zoom
  var btn = $("#back-to-top");
  $(window).scroll(function () {
    if ($(window).scrollTop() > 300) {
      btn.addClass("show");
    } else {
      btn.removeClass("show");
    }
  });
  $(".testi").owlCarousel({
    loop: true,
    autoplay: true,
    autoplayTimeout: 5000,
    smartSpeed: 800,
    autoplayHoverPause: true,
    margin: 30,
    nav: true,
    dots: false,
    navText: [
      '<i class="fa fa-angle-left"></i>',
      '<i class="fa fa-angle-right"></i>',
    ],
    responsive: {
      0: {
        items: 1,
      },
      600: {
        items: 2,
      },
      1000: {
        items: 2,
      },
    },
  });
  btn.on("click", function (e) {
    e.preventDefault();
    $("html, body").animate({ scrollTop: 0 }, "300");
  });
});
